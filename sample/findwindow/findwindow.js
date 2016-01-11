var winApi = require(__dirname + '/../');
var handle = winApi.User32.FindWindow(null, "Rechner");

console.log(handle);
