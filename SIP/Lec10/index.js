
function createbankaccount(initial_value) {
    let b = initial_value;

    function checkbalance() {
        console.log(b);
    }
    function deposit(amt) {
        b += amt;
        console.log(b)
    }
    return { checkbalance, deposit }
}

let val = createbankaccount(1000);
val.checkbalance();
val.deposit(1000);



function mult(num) {
    return function (fact) {
        console.log(fact * num)
    }
}

let a = mult(10);
a(20)


let arr = new Array("Apple", "Banana", "Grapes");
console.log(arr)
