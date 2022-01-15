 int k, i, io, n, m;
  cout << "mizane mahv shodane tasvir ra moshakhas konid: ";
  cin >> k;
  for (y=0 ; y<ImgSizeY ; y++)
	  for (x=0 ; x<ImgSizeX ; x++) {
		  miyangin.r = miyangin.g = miyangin.b = 0;
		  for (i = 1; i <= 2 * k; i++) {
			  m = i - k;
			  for (io = 1; io <= 2 * k; io++) {
				  n = io - k;
				  if (y + m < 0 || x + n < 0)
					  continue;
				  pix = InImg[y + m][x + n];
				  miyangin.r += pix.r;
				  miyangin.g += pix.g;
				  miyangin.b += pix.b;
			  }
		  }
		  miyangin.r /= pow(2 * k, 2);
		  miyangin.g /= pow(2 * k, 2);
		  miyangin.b /= pow(2 * k, 2);
		  pix.r = miyangin.r;
		  pix.g = miyangin.g;
		  pix.b = miyangin.b;
		  OutImg[y][x] = pix;
	  }