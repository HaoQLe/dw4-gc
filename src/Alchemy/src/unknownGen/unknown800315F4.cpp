#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_8003155C();
void fn_80046FD8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDriverDatabase_fieldInit();
void *igEnumMetaField_getMeta();
void igEnumMetaField_register();
void igObject_register();
extern char lbl_80466C6C[];
extern char lbl_80466CA8[];
extern char lbl_80466DD4[];
extern char lbl_80466DEC[];
extern char lbl_80471914[];
extern char lbl_80472B24[];
extern char lbl_80472C48[];
extern char lbl_804758E4[];
extern char lbl_8055D518[4];
extern char lbl_8055D51C[4];
extern char lbl_8055D520[4];
extern char lbl_8055D524[4];
extern char lbl_8055D528[8];
extern char lbl_8055D530[4];
extern char lbl_8055D534[4];
extern char lbl_8055D538[4];
extern char lbl_8055D53C[4];
extern char lbl_8055D540[8];
extern char lbl_8055D548[8];
extern void *lbl_80561C30;
extern void *lbl_80561C34;
extern void *lbl_80561C3C;
extern void *lbl_80561C40;
extern void *lbl_80561C48;
extern void *lbl_80561C4C;
extern void *lbl_805621F4;
void *igEnumArrayMetaField_getMeta();
void *igEnumArrayMetaField_vtableRead();
void fn_80031864();
void igEnumArrayMetaField_register();
void *igEnumArrayMetaField_getMetaCall();
void *igEnumArrayMetaField_parentMeta();
void igEnumArrayMetaField_fieldInit();
void *igDriverDatabase_getMeta();
void *igDriverDatabase_vtableRead();
void fn_80031CD8();
void igDriverDatabase_register();
void *igDriverDatabase_getMetaCall();
}
struct UnknownGenRoot800317CC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800317CC(){fn_80046FD8(this);}
};
struct UnknownGenObject800317CC_0 : UnknownGenRoot800317CC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800317CC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800317CC_1 : UnknownGenObject800317CC_0 {
 inline ~UnknownGenObject800317CC_1(){unknown00=lbl_804758E4;}
};
struct UnknownGenObject800317CC : UnknownGenObject800317CC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800317CC(){unknown00=lbl_80472B24;}
};
struct UnknownGenRoot80031AF8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80031AF8(){fn_8006665C(this);}
};
struct UnknownGenObject80031AF8 : UnknownGenRoot80031AF8 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80031AF8(){unknown00=lbl_80472C48;}
};
extern "C" {
void *igEnumMetaField_getMetaCall(){return igEnumMetaField_getMeta();}
void igEnumMetaField_fieldInit(){
 void *value0=lbl_80561C30;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D518,1);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_8055D51C,lbl_8055D520,lbl_8055D524,value1);
}
void fn_80031690(){
 if(!lbl_80561C34){
  void *object=(lbl_80561C34=fn_8006546C(lbl_80561C30,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C34));
   reinterpret_cast<short *>(lbl_80561C34)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C34);
  }
 }
}
void *fn_80031728(){
 if(!lbl_80561C34){
  fn_8003155C();
 }
 return lbl_80561C34;
}
void *fn_80031758(void *object){
 fn_80031864();
 return fn_8006546C(lbl_80561C3C,object);
}
void *igEnumArrayMetaField_getMeta(){
 if(!lbl_80561C3C || !(reinterpret_cast<unsigned int *>(lbl_80561C3C)[0x24/4]&4)) fn_80031864();
 return lbl_80561C3C;
}
void *igEnumArrayMetaField_vtableRead(){
 UnknownGenObject800317CC object;
 object.unknown00=lbl_80472B24;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80031864(){
 fn_80066188((int)igEnumArrayMetaField_register);
}
void igEnumArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C3C,(int)igEnumMetaField_register,(int)igEnumArrayMetaField_parentMeta,(int)igEnumArrayMetaField_getMetaCall,(int)lbl_80466C6C,60,(int)igEnumArrayMetaField_vtableRead,(int)igEnumArrayMetaField_fieldInit,0,(int)lbl_8055D528);
}
void *igEnumArrayMetaField_getMetaCall(){return igEnumArrayMetaField_getMeta();}
void *igEnumArrayMetaField_parentMeta(){return lbl_80561C30;}
void igEnumArrayMetaField_fieldInit(){
 void *meta=lbl_80561C3C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D530,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D534,lbl_8055D538,lbl_8055D53C,field);
}
void fn_800319A4(){
 if(!lbl_80561C40){
  void *object=(lbl_80561C40=fn_8006546C(lbl_80561C3C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C40));
   reinterpret_cast<short *>(lbl_80561C40)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C40);
  }
 }
}
void *fn_80031A3C(){
 void *value0;
 if(!lbl_80561C48){
  value0=fn_800635C8(lbl_80466CA8,lbl_8055D540,lbl_8055D548,2);
  lbl_80561C48=value0;
 }
 return lbl_80561C48;
}
void *fn_80031A84(void *object){
 fn_80031CD8();
 return fn_8006546C(lbl_80561C4C,object);
}
void *igDriverDatabase_getMeta(){
 if(!lbl_80561C4C || !(reinterpret_cast<unsigned int *>(lbl_80561C4C)[0x24/4]&4)) fn_80031CD8();
 return lbl_80561C4C;
}
void *igDriverDatabase_vtableRead(){
 UnknownGenObject80031AF8 object;
 object.unknown00=lbl_80472C48;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80031CD8(){
 fn_80066188((int)igDriverDatabase_register);
}
void igDriverDatabase_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C4C,(int)igObject_register,(int)fn_800237D0,(int)igDriverDatabase_getMetaCall,(int)lbl_80466DEC,56,(int)igDriverDatabase_vtableRead,(int)igDriverDatabase_fieldInit,0,(int)lbl_80466DD4);
}
void *igDriverDatabase_getMetaCall(){return igDriverDatabase_getMeta();}
}
#pragma pop
