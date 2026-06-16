let patient = [];
let doctor = [];
let mark=0;


function registerPatientDetails(name, contact, age, gender, room){
    // let doc = doctor.find((obj)=>obj.allocatedStatus==true)
    // console.log(doc)
    patient.push({
        name:name.toUpperCase(),
        contact:contact,
        age:age,
        gender:gender.toUpperCase(),
        ID:Math.floor(Math.random()*100),
        mark:mark,
        DateOfAdmit:Date()
    })
    mark++;
    console.log("----------Patient Successfully Registered-----------")

    return{
        getRoomOfPatient(){
            return room;
        },
        getPatientInfo(){
            
            return PatientInfo;
        }
        
    }
    
}


function addDoctor(doctor_name, specialist){
    const startTime = Date.now(); 
    const eightHoursMs = 8 * 60 * 60 * 1000; // hours * minutes * seconds * ms

    const formatTime = (dateObj) => {
        return dateObj.toLocaleString('en-IN', { 
            hour: '2-digit', 
            minute: '2-digit', 
            hour12: true 
        });
    };
    doctor.push({
        doctor: doctor_name,
        specialistOf: specialist,
        allocatedStatus: true,
        allocatedAt: new Date(startTime).toISOString(),
        leaveTime: new Date(startTime + eightHoursMs).toISOString(), 
    });
}


let register = registerPatientDetails("kapil", "58469865", 23, "male", "01")

// console.log(register)
console.log(patient[0])
console.log("Room No."+register.getRoomOfPatient())
addDoctor("Sujit", "BHMS")
console.log(doctor)