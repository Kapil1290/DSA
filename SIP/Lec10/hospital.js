
function registerPatientDetails(name, contact, age, gender, room){
    name = name.toUpperCase();
    contact=contact;
    age = age;
    gender = gender.toUpperCase();
    let ID = floor(Math.random()*1000000);
    console.log(ID)
    let check = 1;

    console.log("----------Patient Successfully Registered-----------")

    return{
        getRoomOfPatient(){
            return room;
        },
        getPatientInfo(){
            
        }
        
    }
    
}

let register = registerPatientDetails("kapil", "58469865", 23, "male", "01")
console.log(register)
