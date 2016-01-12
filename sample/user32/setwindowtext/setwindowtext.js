var winApi = require(__dirname + '/../../../');

console.log('whaterv');
console.log(winApi);

var windowHandle = 0x0002044C;
var windowText = 'Whatever sample';

console.log('Set window text of [' + windowHandle + '] to ' + windowText);
console.log(winApi.User32.SetWindowText(windowHandle, windowText));
