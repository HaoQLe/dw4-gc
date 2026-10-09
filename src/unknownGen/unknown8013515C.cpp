#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void igChildContainer_register();
void igReplaceChild_fieldInit();
extern char lbl_8049C878[];
extern char lbl_8055F604[8];
extern void *lbl_80563C74;
extern void *lbl_8056453C;
void *igReplaceChild_getMeta();
void fn_80135198();
void igReplaceChild_register();
void *igReplaceChild_getMetaCall();
void *fn_80135250();
}
extern "C" {
void *igReplaceChild_getMeta(){
 if(!lbl_80563C74 || !(reinterpret_cast<unsigned int *>(lbl_80563C74)[0x24/4]&4)) fn_80135198();
 return lbl_80563C74;
}
void fn_80135198(){
 fn_80066188((int)igReplaceChild_register);
}
void igReplaceChild_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563C74,(int)igChildContainer_register,(int)fn_80135250,(int)igReplaceChild_getMetaCall,(int)lbl_8049C878,44,0,(int)igReplaceChild_fieldInit,0,(int)lbl_8055F604);
}
void *igReplaceChild_getMetaCall(){return igReplaceChild_getMeta();}
void *fn_80135250(){return lbl_8056453C;}
}
#pragma pop
