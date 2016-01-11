var getAsyncKeyState = require('bindings')('GetAsyncKeyState.node').GetAsyncKeyStateSync;

module.exports = getAsyncKeyState;
