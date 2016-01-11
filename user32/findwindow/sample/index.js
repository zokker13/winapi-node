var findwindow = require(__dirname + '/../');

var windowName = "Rechner";
var className = null;

//Synchronous call
var result = findwindow.findWindowSync(className, windowName);
console.log(result);

//Asynchronous solution
findwindow.findWindow(function(err, result) {
  if (err) {
    console.log("No window");
    console.log(err);
  } else {
    console.log("FOund result");
    console.log(result);
  }
}, className, windowName);
