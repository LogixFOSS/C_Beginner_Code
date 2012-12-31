function google_ad_request_done(google_ads) {

var sitebackground = '#FFFFFF'; /* Use 000000 for white BG and FFFFFF for black BG  */
var sitefontsize = '13px'; /* Normally 12px or 13px  */

var s = '<span id="nointelliTXT">';
var i;

if (google_ads.length == 0) {
return;
}

if (google_ads[0].type == "flash") {

	if (customadstyle == "table") {
		
	s += '<div style="width:' + google_ad.image_width + 'px; text-align:left">';
	s += '<a href="' + google_info.feedback_url + '" style="color:' + sitebackground + ';font-size:11px" rel="norewrite" target="_blank">Ads by Google</a>'; 
	s += '</div>';
	s += '<div style="width:' + google_ad.image_width + 'px; text-align:left">' +
	'<object classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000"' +
	' codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=6,0,0,0" WIDTH="' + 
	google_ad.image_width + '" HEIGHT="' + 
	google_ad.image_height + '"> <PARAM NAME="movie" VALUE="' + 
	google_ad.image_url + '">' + 
	'<PARAM NAME="quality" VALUE="high">' + 
	'<PARAM NAME="AllowScriptAccess" VALUE="never">' + 
	'<EMBED src="' + 
	google_ad.image_url + '" WIDTH="' + 
	google_ad.image_width + '" HEIGHT="' + 
	google_ad.image_height + 
	'" TYPE="application/x-shockwave-flash"' + 
	' AllowScriptAccess="never" ' + 
	' PLUGINSPAGE="http://www.macromedia.com/go/getflashplayer"></EMBED></OBJECT>';
	s += '</div>';	
	
	} else {

	s += '<a href="' + 
google_info.feedback_url + '" style="color:#000000;font-size:11px" rel="norewrite" target="_blank">Ads by Google</a><br>' + 
'<object classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000"' +
' codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=6,0,0,0" WIDTH="' + 
google_ad.image_width + '" HEIGHT="' + 
google_ad.image_height + '"> <PARAM NAME="movie" VALUE="' + 
google_ad.image_url + '">' + 
'<PARAM NAME="quality" VALUE="high">' + 
'<PARAM NAME="AllowScriptAccess" VALUE="never">' + 
'<EMBED src="' + 
google_ad.image_url + '" WIDTH="' + 
google_ad.image_width + '" HEIGHT="' + 
google_ad.image_height + 
'" TYPE="application/x-shockwave-flash"' + 
' AllowScriptAccess="never" ' + 
' PLUGINSPAGE="http://www.macromedia.com/go/getflashplayer"></EMBED></OBJECT>';

	}

} else if (google_ads[0].type == "image") {

	if (customadstyle == "table") {
		
	s += '<div style="width:'+ google_ads[0].image_width +'px; text-align:left">';
	s += '<a href="' + google_info.feedback_url + '" style="color:' + sitebackground + ';font-size:11px" rel="norewrite" target="_blank">Ads by Google</a>';
	s += '</div>';
	s += '<div style="width:'+ google_ads[0].image_width +'px;">';
	s += '<a href="' + 
	google_ads[0].url + '" target="_top" title="go to ' + 
	google_ads[0].visible_url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[0].visible_url + '\';return true" rel="norewrite" target="_blank"><img border="0" src="' + 
	google_ads[0].image_url + '"width="' + 
	google_ads[0].image_width + '"height="' + 
	google_ads[0].image_height + '"></a>';
	s += '</div>';
	
	} else {
		
	s += '<a href="' + 
	google_info.feedback_url + '" style="color:#000000;font-size:11px" rel="norewrite" target="_blank">Ads by Google</a><br> <a href="' + 
	google_ads[0].url + '" target="_top" title="go to ' + 
	google_ads[0].visible_url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[0].visible_url + '\';return true" rel="norewrite" target="_blank"><img border="0" src="' + 
	google_ads[0].image_url + '"width="' + 
	google_ads[0].image_width + '"height="' + 
	google_ads[0].image_height + '"></a>';
	
	}	

} else if (google_ads[0].type == "html") {

	if (customadstyle == "table") {
		
	s += '<center>';
	s += google_ads[0].snippet;
	s += '</center>';
	
	} else {
		
	s += google_ads[0].snippet;
	
	}

} else {


if (google_ads.length == 1) {

	if (customadstyle == "table") {
	
	s += '<table class="tborder" cellpadding="6" cellspacing="0" border="0" width="100%" align="center"><tr><td class="tcat" align="left"><a href="' + google_info.feedback_url + '" style="color:#FFFFFF;font:Arial;font-size:11px" rel="norewrite" target="_blank">Ads by Google</a></td></tr>' + 

	'<tr><td class="alt1" align="left" style="line-height:200%;"><a style="text-decoration:none" href="' + 
	google_ads[0].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[0].visible_url + '\';return true" rel="norewrite" target="_blank"> <span style="text-decoration:none;font-size:18px"> <b>' + 
	google_ads[0].line1 + '</b></span></a> <span style="color:#000000;font-size:16px"><br />' +
	google_ads[0].line2 + '&nbsp;' +
	google_ads[0].line3 + '<br/></span> <span><a style="color:#008000;font-size:16px;text-decoration:none" href="' + 
	google_ads[0].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[0].visible_url + '\';return true" rel="norewrite" target="_blank">' + 
	google_ads[0].visible_url + '</span></a><br></td></tr>';
	s += '</table><br><br>';
	
		if (google_ads[0].bidtype == "CPC") { /* insert this snippet for each ad call */ 
		google_adnum = google_adnum + google_ads.length;
		}

	} else {

	s += '<a href="' + 
	google_info.feedback_url + '" style="color:#000000;font-size:11px" rel="norewrite" target="_blank">Ads by Google</a><br><br> <a style="text-decoration:none" href="' + 
	google_ads[0].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[0].visible_url + '\';return true" rel="norewrite" target="_blank"> <div style="line-height:200%;"><span style="text-decoration:none;font-size:16px"> <b>' + 
	google_ads[0].line1 + '</b></span></a> <span style="color:#000000;font-size:' + sitefontsize + '"><br/>' +
	google_ads[0].line2 + '&nbsp;' +
	google_ads[0].line3 + '<br/></span> <span><a style="color:#008000;font-size:' + sitefontsize + ';text-decoration:none" href="' + 
	google_ads[0].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[0].visible_url + '\';return true" rel="norewrite" target="_blank">' + 
	google_ads[0].visible_url + '</span></a><br></div>';
	
		if (google_ads[0].bidtype == "CPC") { /* insert this snippet for each ad call */ 
		google_adnum = google_adnum + google_ads.length;
		}

	}


} else if (google_ads.length > 1) {

	if (customadstyle == "table") {
	
	s += '<table class="tborder" cellpadding="6" cellspacing="0" border="0" width="100%" align="center"><tr><td class="tcat" align="left"><a href="' + google_info.feedback_url + '" style="color:#FFFFFF;font:Arial;font-size:11px" rel="norewrite"  target="_blank">Ads by Google</a></td></tr>';
	
	for(i = 0; i < google_ads.length; ++i) {
	
	
	s += '<tr><td class="alt1" align="left"><a target="_blank" style="text-decoration:none;font-size:16px" href="' + 
	google_ads[i].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[i].visible_url + '\';return true" rel="norewrite" target="_blank"><b>' + 
	google_ads[i].line1 + '</b></a> <span style="color:#000000;font-size:14px"> - ' +
	google_ads[i].line2 + '&nbsp;' +
	google_ads[i].line3 + ' - </span> <span><a target="_blank" style="color:#008000;text-decoration:none;font-size:14px" href="' + 
	google_ads[i].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[i].visible_url + '\';return true" rel="norewrite" target="_blank">' + 
	google_ads[i].visible_url + '</span></a></td></tr>';
	}
	
		s += '</table><br><br>';
	
		if (google_ads[0].bidtype == "CPC") { /* insert this snippet for each ad call */ 
		google_adnum = google_adnum + google_ads.length;
		}
	
	} else {
		
	s += '<a href="' + google_info.feedback_url + '" style="color:#000000;font:Arial;font-size:11px" rel="norewrite" target="_blank">Ads by Google</a><br>';
	
	for(i = 0; i < google_ads.length; ++i) {
	
	
	s += '<br><a target="_blank" style="text-decoration:none;font-size:14px" href="' + 
	google_ads[i].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[i].visible_url + '\';return true" rel="norewrite" target="_blank"><b>' + 
	google_ads[i].line1 + '</b></a> <span style="color:#000000;font-size:14px;line-height:1.5em"> - ' +
	google_ads[i].line2 + '&nbsp;' +
	google_ads[i].line3 + ' - </span> <span><a target="_blank" style="color:#008000;text-decoration:none;font-size:14px" href="' + 
	google_ads[i].url + '" onmouseout="window.status=\'\'" onmouseover="window.status=\'go to ' +
	google_ads[i].visible_url + '\';return true" rel="norewrite" target="_blank">' + 
	google_ads[i].visible_url + '</span></a>';
	}
	

		if (google_ads[0].bidtype == "CPC") { /* insert this snippet for each ad call */ 
		google_adnum = google_adnum + google_ads.length;
		}
		
	}

}
    }

s += '</span>';

    document.write(s);
    return;
  }
