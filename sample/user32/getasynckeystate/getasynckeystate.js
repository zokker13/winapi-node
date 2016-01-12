var winApi = require(__dirname + '/../../../');
var handle = winApi.User32.FindWindow(null, "Rechner");

var keyA = 0x41;    //The key A



while (true) {
  var result = winApi.User32.GetAsyncKeyState(keyA);

  setTimeout(function() {
    console.log('whatever');
  }, 30);

  if (result === 1) {
    console.log('Key was pressed long ago');
  } else if (result <= -32767) {
    console.log('Key being pressed');
  } else {

    //Whatever - eat ressources
  }

}
