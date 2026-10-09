#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801AB6FC();
void igObject_register();
extern char lbl_804AB4E0[];
extern char lbl_804AB4FC[];
extern void *lbl_805621F4;
extern void *lbl_80564694;
extern void *lbl_80564698;
extern void *lbl_8056469C;
void *igTransformSourceParameters_getMeta();
void fn_801AB208();
void igTransformSourceParameters_register();
void *igTransformSourceParameters_getMetaCall();
void *igTransformSource_getMeta();
void fn_801AB32C();
void igTransformSource_register();
void *igTransformSource_getMetaCall();
}
extern "C" {
void *igTransformSourceParameters_getMeta(){
 if(!lbl_80564694 || !(reinterpret_cast<unsigned int *>(lbl_80564694)[0x24/4]&4)) fn_801AB208();
 return lbl_80564694;
}
void fn_801AB208(){
 fn_80066188((int)igTransformSourceParameters_register);
}
void igTransformSourceParameters_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564694,(int)igObject_register,(int)fn_800237D0,(int)igTransformSourceParameters_getMetaCall,(int)lbl_804AB4E0,8,0,0,0,0);
}
void *igTransformSourceParameters_getMetaCall(){return igTransformSourceParameters_getMeta();}
void *fn_801AB2B4(){
 if(!lbl_80564698) lbl_80564698=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564698;
}
void *igTransformSource_getMeta(){
 if(!lbl_80564698 || !(reinterpret_cast<unsigned int *>(lbl_80564698)[0x24/4]&4)) fn_801AB32C();
 return lbl_80564698;
}
void fn_801AB32C(){
 fn_80066188((int)igTransformSource_register);
}
void igTransformSource_register(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564698,(int)igObject_register,(int)fn_800237D0,(int)igTransformSource_getMetaCall,(int)lbl_804AB4FC,8,0,0,0,0);
}
void *igTransformSource_getMetaCall(){return igTransformSource_getMeta();}
void *fn_801AB3D8(void *object){
 fn_801AB6FC();
 return fn_8006546C(lbl_8056469C,object);
}
void *igTransformSequence1_5_getMeta(){
 if(!lbl_8056469C || !(reinterpret_cast<unsigned int *>(lbl_8056469C)[0x24/4]&4)) fn_801AB6FC();
 return lbl_8056469C;
}
}
#pragma pop
