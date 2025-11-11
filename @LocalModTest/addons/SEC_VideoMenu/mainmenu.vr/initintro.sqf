// --- Halo‑Reach menu music ------------------------------------
0  fadeMusic 0;                          // start silent
playMusic "SEC_Video_Menu_Music";         // class from CfgMusic
5  fadeMusic 1;                          // reach full volume after 5 s
// --------------------------------------------------------------
enableSaving [ false, false ];
cutText ["", "BLACK FADED", 69];
enableEnvironment false;
showCinemaBorder false;


while {true} do
{
	_video = ["SEC_VideoMenu\mainmenu.vr\Tutorial.ogv"] spawn BIS_fnc_playVideo;
	waitUntil {scriptDone _video};
};