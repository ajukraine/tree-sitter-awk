(command
  (command_name) @_cmd
  (#eq? @_cmd "awk")
  
  (raw_string) @awk
  (#offset! @awk 0 1 0 -1)
)

