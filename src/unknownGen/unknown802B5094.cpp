#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beWaterPlain_getMeta();
void beWaterPlain_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802B51DC();
extern char lbl_8041CD18[];
extern char lbl_80534620[];
extern void *lbl_80534624;
void beWaterPlain_register();
void *beWaterPlain_getMetaCall();
}
extern "C" {
void fn_802B5094(){
 fn_80066188((int)beWaterPlain_register);
}
void beWaterPlain_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534620,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beWaterPlain_getMetaCall,(int)lbl_8041CD18,32,(int)beWaterPlain_vtableRead,0,0,0);
}
void *beWaterPlain_getMetaCall(){return beWaterPlain_getMeta();}
void *beUnicode_getMeta(){
 if(!lbl_80534624 || !(reinterpret_cast<unsigned int *>(lbl_80534624)[0x24/4]&4)) fn_802B51DC();
 return lbl_80534624;
}
}
#pragma pop
