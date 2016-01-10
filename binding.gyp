{
  "targets": [
    {
      "target_name": "findwindow",
      "sources": [ "user32.lib/find_window/findwindow.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
