
// const server = require('http');

// const se = server.createServer((req, res)=>{
//     res.write("HEllo from kapil")
//    res.end()

// })

// se.listen(5000, ()=>{
//     console.log("Server is running")
// })

const http = require('http');
// 1. Import the File System module
const fs = require('fs'); 
const path = require('path');

const PORT = 3000;

const server = http.createServer((req, res) => {
    // 2. Define the path to your HTML file
    const filePath = path.join(__dirname, 'index.html');

    // 3. Read the HTML file from your hard drive
    fs.readFile(filePath, (err, content) => {
        if (err) {
            // Handle error if the file is missing
            res.writeHead(500, { 'Content-Type': 'text/plain' });
            res.end('Error loading HTML file');
        } else {
            // 4. Change Content-Type to text/html so the browser renders it
            res.writeHead(200, { 'Content-Type': 'text/html' });
            res.end(content);
        }
    });
});

server.listen(PORT, () => {
    console.log(`Server is running at http://localhost:${PORT}/`);
});