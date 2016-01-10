var findWindow = require(__dirname + '/find_window');

module.exports = {
  sync: {
    findWindow: findWindow.findWindowSync
  }
};
