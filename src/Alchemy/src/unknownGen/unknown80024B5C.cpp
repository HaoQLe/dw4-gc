#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void arkRegister__Q33Gap4Core15igStringObjListFv();
void fn_80021B94();
void *fn_800256C0();
void *fn_80029E64(void *);
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDataList_register();
extern char lbl_804635E0[];
extern char lbl_80470F5C[];
extern char lbl_80472FA0[];
extern char lbl_80476A8C[];
extern char lbl_80476AF0[];
extern char lbl_80476B54[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D0A0[6];
extern void *lbl_8056158C;
extern char lbl_80561590[4];
extern void *lbl_805615A4;
extern void *lbl_80561D3C;
extern void *lbl_805621F4;
void *igStringRefList_getMeta();
void *igStringRefList_vtableRead();
void fn_80024C64();
void igStringRefList_register();
void *igStringRefList_getMetaCall();
void *fn_80024D1C();
void fn_80024D24();
}
struct UnknownGenObject80024C0C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80024E90_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80024B5C(void *object){
 fn_80024C64();
 return fn_8006546C(lbl_8056158C,object);
}
void *fn_80024B94(){
 if(!lbl_8056158C) lbl_8056158C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056158C;
}
void *igStringRefList_getMeta(){
 if(!lbl_8056158C || !(reinterpret_cast<unsigned int *>(lbl_8056158C)[0x24/4]&4)) fn_80024C64();
 return lbl_8056158C;
}
void *igStringRefList_vtableRead(){
 UnknownGenObject80024C0C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476B54;
 object.unknown00=lbl_80470F5C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80024C64(){
 fn_80066188((int)igStringRefList_register);
}
void igStringRefList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056158C,(int)igDataList_register,(int)fn_80024D1C,(int)igStringRefList_getMetaCall,(int)lbl_804635E0,20,(int)igStringRefList_vtableRead,(int)fn_80024D24,0,0);
}
void *igStringRefList_getMetaCall(){return igStringRefList_getMeta();}
void *fn_80024D1C(){return lbl_80561D3C;}
void fn_80024D24(){
 void *meta=lbl_8056158C;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_800256C0();
 field->unknown38=0;
 field->unknown1C=lbl_80561590;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80024DE0(void *object){
 arkRegister__Q33Gap4Core15igStringObjListFv();
 return fn_8006546C(lbl_805615A4,object);
}
void *fn_80024E18(){
 if(!lbl_805615A4) lbl_805615A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805615A4;
}
void *igStringObjList_getMeta(){
 if(!lbl_805615A4 || !(reinterpret_cast<unsigned int *>(lbl_805615A4)[0x24/4]&4)) arkRegister__Q33Gap4Core15igStringObjListFv();
 return lbl_805615A4;
}
void *igStringObjList_vtableRead(){
 UnknownGenObject80024E90_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476AF0;
 object.unknown00=lbl_80476A8C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
