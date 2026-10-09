#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igParameterExist_fieldInit();
void igParameterSetConstraint_register();
extern char lbl_8049D448[];
extern char lbl_8049D468[];
extern char lbl_8049D49C[];
extern char lbl_804A4360[];
extern char lbl_804A43C4[];
extern char lbl_804A4428[];
extern char lbl_804AA298[];
extern char lbl_8055F740[4];
extern char lbl_8055F744[4];
extern char lbl_8055F748[4];
extern char lbl_8055F74C[4];
extern char lbl_8055F750[8];
extern char lbl_8055F758[8];
extern char lbl_8055F760[8];
extern char lbl_8055F768[8];
extern char lbl_8055F770[8];
extern void *lbl_80563DD0;
extern void *lbl_80563DF4;
extern void *lbl_80563DFC;
extern void *lbl_80563E08;
void *igParameterNonNull_getMeta();
void *igParameterNonNull_vtableRead();
void fn_801396DC();
void igParameterNonNull_register();
void *igParameterNonNull_getMetaCall();
void *fn_80139794();
void igParameterNonNull_fieldInit();
void *igParameterMatch_getMeta();
void *igParameterMatch_vtableRead();
void fn_80139990();
void igParameterMatch_register();
void *igParameterMatch_getMetaCall();
void igParameterMatch_fieldInit();
void *igParameterExist_getMeta();
void *igParameterExist_vtableRead();
void fn_80139C74();
void igParameterExist_register();
void *igParameterExist_getMetaCall();
}
struct UnknownGenRoot801395FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801395FC(){fn_8006665C(this);}
};
struct UnknownGenObject801395FC_0 : UnknownGenRoot801395FC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801395FC_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject801395FC : UnknownGenObject801395FC_0 {
 UnknownGenString unknown0C;
 inline ~UnknownGenObject801395FC(){unknown00=lbl_804A4360;}
};
struct UnknownGenRoot80139878 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139878(){fn_8006665C(this);}
};
struct UnknownGenObject80139878_0 : UnknownGenRoot80139878 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139878_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139878 : UnknownGenObject80139878_0 {
 UnknownGenString unknown0C;
 UnknownGenString unknown10;
 char unknown14[4];
 inline ~UnknownGenObject80139878(){unknown00=lbl_804A43C4;}
};
struct UnknownGenRoot80139B24 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139B24(){fn_8006665C(this);}
};
struct UnknownGenObject80139B24_0 : UnknownGenRoot80139B24 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject80139B24_0(){unknown00=lbl_804AA298;}
};
struct UnknownGenObject80139B24 : UnknownGenObject80139B24_0 {
 UnknownGenString unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80139B24(){unknown00=lbl_804A4428;}
};
extern "C" {
void *igParameterNonNull_getMeta(){
 if(!lbl_80563DF4 || !(reinterpret_cast<unsigned int *>(lbl_80563DF4)[0x24/4]&4)) fn_801396DC();
 return lbl_80563DF4;
}
void *igParameterNonNull_vtableRead(){
 UnknownGenObject801395FC object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=lbl_804A4360;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801396DC(){
 fn_80066188((int)igParameterNonNull_register);
}
void igParameterNonNull_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DF4,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterNonNull_getMetaCall,(int)lbl_8049D448,16,(int)igParameterNonNull_vtableRead,(int)igParameterNonNull_fieldInit,0,0);
}
void *igParameterNonNull_getMetaCall(){return igParameterNonNull_getMeta();}
void *fn_80139794(){return lbl_80563DD0;}
void igParameterNonNull_fieldInit(){
 void *value0=lbl_80563DF4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F740,1);
 fn_800659C0(value0,lbl_8055F744,lbl_8055F748,lbl_8055F74C,value1);
}
void *fn_80139804(void *object){
 fn_80139990();
 return fn_8006546C(lbl_80563DFC,object);
}
void *igParameterMatch_getMeta(){
 if(!lbl_80563DFC || !(reinterpret_cast<unsigned int *>(lbl_80563DFC)[0x24/4]&4)) fn_80139990();
 return lbl_80563DFC;
}
void *igParameterMatch_vtableRead(){
 UnknownGenObject80139878 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=lbl_804A43C4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139990(){
 fn_80066188((int)igParameterMatch_register);
}
void igParameterMatch_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563DFC,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterMatch_getMetaCall,(int)lbl_8049D468,20,(int)igParameterMatch_vtableRead,(int)igParameterMatch_fieldInit,0,0);
}
void *igParameterMatch_getMetaCall(){return igParameterMatch_getMeta();}
void igParameterMatch_fieldInit(){
 void *value0=lbl_80563DFC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F750,2);
 fn_800659C0(value0,lbl_8055F758,lbl_8055F760,lbl_8055F768,value1);
}
void *fn_80139AB0(void *object){
 fn_80139C74();
 return fn_8006546C(lbl_80563E08,object);
}
void *igParameterExist_getMeta(){
 if(!lbl_80563E08 || !(reinterpret_cast<unsigned int *>(lbl_80563E08)[0x24/4]&4)) fn_80139C74();
 return lbl_80563E08;
}
void *igParameterExist_vtableRead(){
 UnknownGenObject80139B24 object;
 object.unknown00=lbl_804AA298;
 object.unknown08.value=0;
 object.unknown00=lbl_804A4428;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139C74(){
 fn_80066188((int)igParameterExist_register);
}
void igParameterExist_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E08,(int)igParameterSetConstraint_register,(int)fn_80139794,(int)igParameterExist_getMetaCall,(int)lbl_8049D49C,24,(int)igParameterExist_vtableRead,(int)igParameterExist_fieldInit,0,(int)lbl_8055F770);
}
void *igParameterExist_getMetaCall(){return igParameterExist_getMeta();}
}
#pragma pop
