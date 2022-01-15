 int a, b;
  for (y=0 ; y<ImgSizeY ; y++)
	  for (x=0 ; x<ImgSizeX ; x++) {
		  pix = InImg[y][x];
		  a = y + (50 * sin(x / 80.));
		  b = x + (30 * sin(y / 60.));
		  OutImg[a][b] = pix;
	  }