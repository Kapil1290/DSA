// let patient = [];
// let doctor = [];
// let mark=0;


// function registerPatientDetails(name, contact, age, gender, room){
//     // let doc = doctor.find((obj)=>obj.allocatedStatus==true)
//     // console.log(doc)
//     patient.push({
//         name:name.toUpperCase(),
//         contact:contact,
//         age:age,
//         gender:gender.toUpperCase(),
//         ID:Math.floor(Math.random()*100),
//         mark:mark,
//         DateOfAdmit:Date()
//     })
//     mark++;
//     console.log("----------Patient Successfully Registered-----------")

//     return{
//         getRoomOfPatient(){
//             return room;
//         },
//         getPatientInfo(){
            
//             return PatientInfo;
//         }
        
//     }
    
// }


// function addDoctor(doctor_name, specialist){
//     const startTime = Date.now(); 
//     const eightHoursMs = 8 * 60 * 60 * 1000; // hours * minutes * seconds * ms

//     const formatTime = (dateObj) => {
//         return dateObj.toLocaleString('en-IN', { 
//             hour: '2-digit', 
//             minute: '2-digit', 
//             hour12: true 
//         });
//     };
//     doctor.push({
//         doctor: doctor_name,
//         specialistOf: specialist,
//         allocatedStatus: true,
//         allocatedAt: new Date(startTime).toISOString(),
//         leaveTime: new Date(startTime + eightHoursMs).toISOString(), 
//         scheduler: {

//         }
//     });
// }


// let register = registerPatientDetails("kapil", "58469865", 23, "male", "01")

// // console.log(register)
// console.log(patient[0])
// console.log("Room No."+register.getRoomOfPatient())
// addDoctor("Sujit", "BHMS")
// console.log(doctor)



class Doctor {
    constructor(id, name, specialization) {
        this.id = id;
        this.name = name;
        this.specialization = specialization;

        this.schedule = {
            "10:00 AM - 11:00 AM": { available: true, patientId: null },
            "11:00 AM - 12:00 PM": { available: true, patientId: null },
            "12:00 PM - 01:00 PM": { available: true, patientId: null },
            "02:00 PM - 03:00 PM": { available: true, patientId: null },
            "03:00 PM - 04:00 PM": { available: true, patientId: null }
        };
    }
}

class Patient {
    constructor(id, name, age, ailment) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.ailment = ailment;
    }
}


class HospitalManagement {
    constructor(hospitalName) {
        this.hospitalName = hospitalName;
        this.doctors = [];
        this.patients = [];
    }

    
    addDoctor(id, name, specialization) {
        const doctor = new Doctor(id, name, specialization);
        this.doctors.push(doctor);
        console.log(`Dr. ${name} (${specialization}) added successfully.`);
    }

addPatient(id, name, age, ailment) {
        const patient = new Patient(id, name, age, ailment);
        this.patients.push(patient);
        console.log(`Patient ${name} registered successfully.`);
    }
    viewDoctorSchedule(doctorId) {
        const doctor = this.doctors.find(doc => doc.id === doctorId);
        if (!doctor) {
            console.log("Doctor not found.");
            return;
        }

        console.log(`\n--- Schedule for Dr. ${doctor.name} ---`);
        for (const [slot, details] of Object.entries(doctor.schedule)) {
            const status = details.available ? "Available" : `Booked (Patient ID: ${details.patientId})`;
            console.log(`${slot}: ${status}`);
        }
    }

    bookAppointment(doctorId, patientId, timeSlot) {
        const doctor = this.doctors.find(doc => doc.id === doctorId);
        const patient = this.patients.find(pat => pat.id === patientId);

        if (!doctor) {
            console.log("Error: Doctor not found.");
            return;
        }
        if (!patient) {
            console.log("Error: Patient not found.");
            return;
        }

        if (doctor.schedule[timeSlot]) {
            if (doctor.schedule[timeSlot].available) {
                doctor.schedule[timeSlot].available = false;
                doctor.schedule[timeSlot].patientId = patientId;
                console.log(`\nSuccess: Appointment booked for ${patient.name} with Dr. ${doctor.name} at ${timeSlot}.`);
            } else {
                console.log(`\nSorry: The slot ${timeSlot} is already booked.`);
            }
        } else {
            console.log(`\nError: Invalid time slot. Please choose a valid schedule.`);
        }
    }
}


const centralHospital = new HospitalManagement("City Central Hospital");


centralHospital.addDoctor("D101", "Alice Smith", "Cardiologist");
centralHospital.addDoctor("D102", "Bob Jones", "Pediatrician");

centralHospital.addPatient("P501", "John Doe", 34, "Heart Palpitations");
centralHospital.addPatient("P502", "Jane Doe", 5, "Fever");


centralHospital.viewDoctorSchedule("D101");

centralHospital.bookAppointment("D101", "P501", "10:00 AM - 11:00 AM");

// 5. Try to book the same slot again (Should show it's already booked)
centralHospital.bookAppointment("D101", "P502", "10:00 AM - 11:00 AM");

// 6. Book another available slot
centralHospital.bookAppointment("D101", "P502", "12:00 PM - 01:00 PM");

// 7. View updated schedule for Dr. Alice to verify changes
centralHospital.viewDoctorSchedule("D101");