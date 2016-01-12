var setWindowText = require('bindings')('SetWindowText.node').SetWindowTextSync;
console.log(setWindowText);
module.exports = setWindowText;
