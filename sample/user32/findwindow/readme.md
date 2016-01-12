# FindWindow

Full Explanation on msdn: [FindWindow](https://msdn.microsoft.com/en-us/library/windows/desktop/ms633499%28v=vs.85%29.aspx)

## Differences between this version and Microsofts
Whenever a window can not be found, the return result of the FindWindow function is `NULL`.
`NULL` is an abstracted wrapper and actually 0.
