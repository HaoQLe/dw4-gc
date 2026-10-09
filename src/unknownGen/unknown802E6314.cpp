#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2FLASHSET_getMeta();
void beAction2FLASHSET_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E64B0();
void igNamedObject_register();
extern char lbl_80421020[];
extern char lbl_805357E4[];
extern void *lbl_805357E8;
void beAction2FLASHSET_register();
void *beAction2FLASHSET_getMetaCall();
}
extern "C" {
void fn_802E6314(){
 fn_80066188((int)beAction2FLASHSET_register);
}
void beAction2FLASHSET_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805357E4,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2FLASHSET_getMetaCall,(int)lbl_80421020,12,(int)beAction2FLASHSET_vtableRead,0,0,0);
}
void *beAction2FLASHSET_getMetaCall(){return beAction2FLASHSET_getMeta();}
void *beAction2WAITCHECK_getMeta(){
 if(!lbl_805357E8 || !(reinterpret_cast<unsigned int *>(lbl_805357E8)[0x24/4]&4)) fn_802E64B0();
 return lbl_805357E8;
}
}
#pragma pop
