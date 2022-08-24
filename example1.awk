BEGIN { FS = ",[ \t]*|[ \t]+" }
      { print $2, $1 }
