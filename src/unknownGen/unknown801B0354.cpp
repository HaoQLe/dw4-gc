#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801B0714();
void *igSimpleUserInfo_getMeta();
void igSimpleUserInfo_vtableRead();
void igUserInfo_register();
extern char lbl_804AC918[];
extern void *lbl_80564660;
extern void *lbl_805648B8;
extern void *lbl_805648BC;
void igSimpleUserInfo_register();
void *igSimpleUserInfo_getMetaCall();
void *fn_801B0404();
}
extern "C" {
void fn_801B0354(){
 fn_80066188((int)igSimpleUserInfo_register);
}
void igSimpleUserInfo_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648B8,(int)igUserInfo_register,(int)fn_801B0404,(int)igSimpleUserInfo_getMetaCall,(int)lbl_804AC918,36,(int)igSimpleUserInfo_vtableRead,0,0,0);
}
void *igSimpleUserInfo_getMetaCall(){return igSimpleUserInfo_getMeta();}
void *fn_801B0404(){return lbl_80564660;}
void *igSimpleShader_getMeta(){
 if(!lbl_805648BC || !(reinterpret_cast<unsigned int *>(lbl_805648BC)[0x24/4]&4)) fn_801B0714();
 return lbl_805648BC;
}
}
#pragma pop
