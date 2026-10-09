#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igGroup_register();
void igShader2_fieldInit();
extern char lbl_804ACB6C[];
extern void *lbl_8056490C;
void *igShader2_getMeta();
void fn_801B16F0();
void igShader2_register();
void *igShader2_getMetaCall();
}
extern "C" {
void *igShader2_getMeta(){
 if(!lbl_8056490C || !(reinterpret_cast<unsigned int *>(lbl_8056490C)[0x24/4]&4)) fn_801B16F0();
 return lbl_8056490C;
}
void fn_801B16F0(){
 fn_80066188((int)igShader2_register);
}
void igShader2_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_8056490C,(int)igGroup_register,(int)fn_8011148C,(int)igShader2_getMetaCall,(int)lbl_804ACB6C,36,0,(int)igShader2_fieldInit,0,0);
}
void *igShader2_getMetaCall(){return igShader2_getMeta();}
}
#pragma pop
