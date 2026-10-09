#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beGeneraterItemDataOne_getMeta();
void beGeneraterItemDataOne_vtableRead();
void *fn_80023CF4();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D8870();
void igNamedObject_register();
extern char lbl_8041CA68[];
extern char lbl_804201C4[];
extern char lbl_804D1F00[];
extern char lbl_804D1F0C[];
extern char lbl_804D1F18[];
extern char lbl_804D1F24[];
extern char lbl_804D1F30[];
extern char lbl_804D1F50[];
extern void *lbl_805352F0;
extern void *lbl_80535300;
extern void *lbl_80535304;
extern void *lbl_805621F4;
void beGeneraterItemDataOne_register();
void *beGeneraterItemDataOne_getMetaCall();
void beGeneraterItemDataOne_fieldInit();
}
extern "C" {
void fn_802D84E4(){
 fn_80066188((int)beGeneraterItemDataOne_register);
}
void beGeneraterItemDataOne_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805352F0,(int)igNamedObject_register,(int)fn_80023CF4,(int)beGeneraterItemDataOne_getMetaCall,(int)lbl_804201C4,24,(int)beGeneraterItemDataOne_vtableRead,(int)beGeneraterItemDataOne_fieldInit,0,0);
}
void *beGeneraterItemDataOne_getMetaCall(){return beGeneraterItemDataOne_getMeta();}
void beGeneraterItemDataOne_fieldInit(){
 void *meta=lbl_805352F0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D1F00,0x3);
 fn_800659C0(meta,lbl_804D1F0C,lbl_804D1F18,lbl_804D1F24,field);
}
void *fn_802D8620(){
 if(!lbl_80535300) lbl_80535300=fn_800635C8(lbl_8041CA68,lbl_804D1F30,lbl_804D1F50,0x8);
 return lbl_80535300;
}
void *fn_802D8680(void *object){
 fn_802D8870();
 return fn_8006546C(lbl_80535304,object);
}
void *fn_802D86C0(){
 if(!lbl_80535304) lbl_80535304=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535304;
}
void *beGenerater_getMeta(){
 if(!lbl_80535304 || !(reinterpret_cast<unsigned int *>(lbl_80535304)[0x24/4]&4)) fn_802D8870();
 return lbl_80535304;
}
}
#pragma pop
