


async function addtodo(){
    const title = document.getElementById("title").ariaValueMax;
    if(title===""){
        alert("enter todo");
        return;
    }
    await fetch("/todos", {
        method: "POST",
        headers: {
            "content-type":"application/json"
        },
        body:JSON.stringify({
            title: title
        })
    })
    document.getElementById.value=""; 
    loadtodos();
}

async function deletetodo(){
    await fetch('/todos'+id, {
        method: "DELETE"
    })
}

async function edittodo(id, title){
    const newtitle = prompt("enter", title);
    if(!newtitle) return title;
    await fetch('/todos'+id, {
        method: 'PUT',
        headers: {
            "content-type":"application/json"
        },
        body: JSON.stringify({
            title: newtitle
        })
    })
    loadtodos()
}