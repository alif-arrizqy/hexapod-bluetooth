void fungsi_gerak() {
  if ( Serial1.available() > 0 ) {
    val = Serial1.read();
    Serial1.println(val);

    if ( val == 'U' )
    {
      while (1) {
        Serial1.println("Maju");
        maju();
        break;
      }
    }
    else if ( val == 'D' )
    {
      while (1) {
        mundur();
        break;
      }
    }
    else if ( val == 'L' )
    {
      while (1) {
        kiri();
        break;
      }
    }
    else if ( val == 'R' )
    {
      while (1) {
        kanan();
        break;
      }
    }
    else if ( val == 'C' )
    {
      while (1) {
        diam();
        break;
      }
    }
  }
}
