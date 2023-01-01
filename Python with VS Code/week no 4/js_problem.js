const prompt = require("prompt-sync")();
let number = parseInt(prompt("Enter any number : "));

for(let i = 1; i<=number; i++)
{
    if(i%3 === 0 && i%5 === 0){
        console.log("FizzeBuzze");
    }
    else if(i%3 === 0)
    {
        console.log("Fizze");
    }else if (i%5 === 0)
    {
        console.log("Buzze");
    }else{
        console.log(i);
    }
    
}