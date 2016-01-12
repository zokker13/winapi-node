{
  "targets": [
    {
      "target_name": "FindWindow",
      "sources": [
        "user32/findwindow/findwindow.cpp"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }, {
      "target_name": "GetAsyncKeyState",
      "sources": [
        "user32/getasynckeystate/getasynckeystate.cpp"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }, {
      "target_name": "SetWindowText",
      "sources": [
        "user32/setwindowtext/setwindowtext.cpp"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
