# GetAsyncKeyState

Full Explanation on msdn: [GetAsyncKeyState](https://msdn.microsoft.com/en-us/library/windows/desktop/ms646293%28v=vs.85%29.aspx)

## Differences between this version and Microsofts
* The input value is a [Int32Value](http://izs.me/v8-docs/classv8_1_1Int32.html), not int!
* The result in this version is a [Int32Value](http://izs.me/v8-docs/classv8_1_1Int32.html), not short!

## Good to know:
Creating a hook on a key may result in:
* 0 -> Key was not pressed
* 1 -> Key was pressed but is not pressed anymore
* -32767 -> Key was pressed and is still being pressed

You might see:
* -32768 -> Whenever you spam a key or make key combinations
