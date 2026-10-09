#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *fn_800D2BD4();
void *fn_800DA384();
void igDataList_register();
void *igGamecubeImage_getMeta();
extern char lbl_80472FA0[];
extern char lbl_80489BA8[];
extern char lbl_80493BE8[];
extern char lbl_80493C48[];
extern char lbl_8055EA6C[6];
extern void *lbl_805621F4;
extern void *lbl_80562FD0;
extern char lbl_80562FD4[4];
void *igTrackedElementList_getMeta();
void *igTrackedElementList_vtableRead();
void fn_800D27B4();
void igTrackedElementList_register();
void *igTrackedElementList_getMetaCall();
void fn_800D286C();
}
struct UnknownGenObject800D275C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeImage_getMetaCall(){return igGamecubeImage_getMeta();}
void *fn_800D26C4(){return fn_800DA384();}
void *fn_800D26E4(){
 if(!lbl_80562FD0) lbl_80562FD0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562FD0;
}
void *igTrackedElementList_getMeta(){
 if(!lbl_80562FD0 || !(reinterpret_cast<unsigned int *>(lbl_80562FD0)[0x24/4]&4)) fn_800D27B4();
 return lbl_80562FD0;
}
void *igTrackedElementList_vtableRead(){
 UnknownGenObject800D275C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80493C48;
 object.unknown00=lbl_80493BE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D27B4(){
 fn_80066188((int)igTrackedElementList_register);
}
void igTrackedElementList_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562FD0,(int)igDataList_register,(int)fn_80024D1C,(int)igTrackedElementList_getMetaCall,(int)lbl_80489BA8,20,(int)igTrackedElementList_vtableRead,(int)fn_800D286C,0,0);
}
void *igTrackedElementList_getMetaCall(){return igTrackedElementList_getMeta();}
void fn_800D286C(){
 void *meta=lbl_80562FD0;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055EA6C));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800D2BD4();
 field->unknown38=0;
 field->unknown1C=lbl_80562FD4;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
