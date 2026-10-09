#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802AA788();
void fn_802ACBCC();
void igObjectList_register();
void *igTextureBindAttrList_getMeta();
void igTextureBindAttrList_vtableRead();
extern char lbl_8041BDAC[];
extern char lbl_8041BDF4[];
extern char lbl_8041BE58[];
extern char lbl_804CDB9C[];
extern char lbl_804CDBA4[];
extern char lbl_804CDBB0[];
extern char lbl_804CDBBC[];
extern char lbl_804CDBCC[];
extern char lbl_80534408[];
extern void *lbl_8053440C;
extern void *lbl_80534410;
extern void *lbl_80534414;
void igTextureBindAttrList_register();
void *igTextureBindAttrList_getMetaCall();
}
extern "C" {
void fn_802AC614(){
 fn_80066188((int)igTextureBindAttrList_register);
}
void igTextureBindAttrList_register(){
 fn_802AA788();
 fn_80066204(0,(int)lbl_80534408,(int)igObjectList_register,(int)fn_80024180,(int)igTextureBindAttrList_getMetaCall,(int)lbl_8041BDAC,20,(int)igTextureBindAttrList_vtableRead,0,0,(int)lbl_804CDB9C);
}
void *igTextureBindAttrList_getMetaCall(){return igTextureBindAttrList_getMeta();}
void *fn_802AC6D0(){
 if(!lbl_8053440C) lbl_8053440C=fn_800635C8(lbl_8041BDF4,lbl_804CDBA4,lbl_804CDBB0,0x3);
 return lbl_8053440C;
}
void *fn_802AC730(){
 if(!lbl_80534410) lbl_80534410=fn_800635C8(lbl_8041BE58,lbl_804CDBBC,lbl_804CDBCC,0x4);
 return lbl_80534410;
}
void *fn_802AC790(void *object){
 fn_802ACBCC();
 return fn_8006546C(lbl_80534414,object);
}
void *igMovieInfo_getMeta(){
 if(!lbl_80534414 || !(reinterpret_cast<unsigned int *>(lbl_80534414)[0x24/4]&4)) fn_802ACBCC();
 return lbl_80534414;
}
}
#pragma pop
