#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80038800();
void fn_8003EBC8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *igBoolMetaField_getMeta();
void igBoolMetaField_register();
extern char lbl_8046784C[];
extern char lbl_80471914[];
extern char lbl_80473260[];
extern char lbl_80473E30[];
extern char lbl_8055D698[8];
extern char lbl_8055D6A0[4];
extern char lbl_8055D6A4[4];
extern char lbl_8055D6A8[4];
extern char lbl_8055D6AC[4];
extern void *lbl_80561E48;
extern void *lbl_80561E4C;
extern void *lbl_80561E50;
extern void *lbl_80561E54;
extern void *lbl_805621F4;
void *igBoolArrayMetaField_getMeta();
void *igBoolArrayMetaField_vtableRead();
void fn_80038A84();
void igBoolArrayMetaField_register();
void *igBoolArrayMetaField_getMetaCall();
void *igBoolArrayMetaField_parentMeta();
void igBoolArrayMetaField_fieldInit();
}
struct UnknownGenRoot800389EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800389EC(){fn_8003EBC8(this);}
};
struct UnknownGenObject800389EC_0 : UnknownGenRoot800389EC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800389EC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800389EC_1 : UnknownGenObject800389EC_0 {
 inline ~UnknownGenObject800389EC_1(){unknown00=lbl_80473E30;}
};
struct UnknownGenObject800389EC : UnknownGenObject800389EC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800389EC(){unknown00=lbl_80473260;}
};
extern "C" {
void *igBoolMetaField_getMetaCall(){return igBoolMetaField_getMeta();}
void fn_800388B0(){
 if(!lbl_80561E4C){
  void *object=(lbl_80561E4C=fn_8006546C(lbl_80561E48,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E4C));
   reinterpret_cast<short *>(lbl_80561E4C)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E4C);
  }
 }
}
void *fn_80038948(){
 if(!lbl_80561E4C){
  fn_80038800();
 }
 return lbl_80561E4C;
}
void *fn_80038978(void *object){
 fn_80038A84();
 return fn_8006546C(lbl_80561E50,object);
}
void *igBoolArrayMetaField_getMeta(){
 if(!lbl_80561E50 || !(reinterpret_cast<unsigned int *>(lbl_80561E50)[0x24/4]&4)) fn_80038A84();
 return lbl_80561E50;
}
void *igBoolArrayMetaField_vtableRead(){
 UnknownGenObject800389EC object;
 object.unknown00=lbl_80473260;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80038A84(){
 fn_80066188((int)igBoolArrayMetaField_register);
}
void igBoolArrayMetaField_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E50,(int)igBoolMetaField_register,(int)igBoolArrayMetaField_parentMeta,(int)igBoolArrayMetaField_getMetaCall,(int)lbl_8046784C,56,(int)igBoolArrayMetaField_vtableRead,(int)igBoolArrayMetaField_fieldInit,0,(int)lbl_8055D698);
}
void *igBoolArrayMetaField_getMetaCall(){return igBoolArrayMetaField_getMeta();}
void *igBoolArrayMetaField_parentMeta(){return lbl_80561E48;}
void igBoolArrayMetaField_fieldInit(){
 void *meta=lbl_80561E50;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D6A0,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D6A4,lbl_8055D6A8,lbl_8055D6AC,field);
}
void fn_80038BC4(){
 if(!lbl_80561E54){
  void *object=(lbl_80561E54=fn_8006546C(lbl_80561E50,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E54));
   reinterpret_cast<short *>(lbl_80561E54)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E54);
  }
 }
}
}
#pragma pop
