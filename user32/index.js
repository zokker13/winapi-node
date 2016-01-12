var findWindow = require(__dirname + '/findwindow');
var getAsyncKeyState = require(__dirname + '/getasynckeystate');
var setWindowText = require(__dirname + '/setwindowtext');

console.log(setWindowText);

module.exports = {
  FindWindow: findWindow,
  GetAsyncKeyState: getAsyncKeyState,
  SetWindowText: setWindowText
};
