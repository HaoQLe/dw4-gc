#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igObjectList_register();
void igObject_register();
extern char lbl_804653B0[];
extern char lbl_804653C0[];
extern char lbl_804653D0[];
extern char lbl_80472FA0[];
extern char lbl_80475D0C[];
extern char lbl_80475D70[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D38C[8];
extern char lbl_8055D394[4];
extern char lbl_8055D398[4];
extern char lbl_8055D39C[4];
extern char lbl_8055D3A0[4];
extern void *lbl_805619BC;
extern void *lbl_805619C0;
extern void *lbl_805619C4;
extern void *lbl_805621F4;
void *igLibraryLoader_getMeta();
void fn_8002D7AC();
void igLibraryLoader_register();
void *igLibraryLoader_getMetaCall();
void *igLibraryList_getMeta();
void *igLibraryList_vtableRead();
void fn_8002D940();
void igLibraryList_register();
void *igLibraryList_getMetaCall();
void *igLibrary_getMeta();
void fn_8002DA30();
void igLibrary_register();
void *igLibrary_getMetaCall();
void igLibrary_fieldInit();
}
struct UnknownGenObject8002D8D0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002D734(){
 if(!lbl_805619BC) lbl_805619BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619BC;
}
void *igLibraryLoader_getMeta(){
 if(!lbl_805619BC || !(reinterpret_cast<unsigned int *>(lbl_805619BC)[0x24/4]&4)) fn_8002D7AC();
 return lbl_805619BC;
}
void fn_8002D7AC(){
 fn_80066188((int)igLibraryLoader_register);
}
void igLibraryLoader_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805619BC,(int)igObject_register,(int)fn_800237D0,(int)igLibraryLoader_getMetaCall,(int)lbl_804653B0,8,0,0,0,0);
}
void *igLibraryLoader_getMetaCall(){return igLibraryLoader_getMeta();}
void *fn_8002D858(){
 if(!lbl_805619C0) lbl_805619C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619C0;
}
void *igLibraryList_getMeta(){
 if(!lbl_805619C0 || !(reinterpret_cast<unsigned int *>(lbl_805619C0)[0x24/4]&4)) fn_8002D940();
 return lbl_805619C0;
}
void *igLibraryList_vtableRead(){
 UnknownGenObject8002D8D0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475D70;
 object.unknown00=lbl_80475D0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002D940(){
 fn_80066188((int)igLibraryList_register);
}
void igLibraryList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619C0,(int)igObjectList_register,(int)fn_80024180,(int)igLibraryList_getMetaCall,(int)lbl_804653C0,20,(int)igLibraryList_vtableRead,0,0,(int)lbl_8055D38C);
}
void *igLibraryList_getMetaCall(){return igLibraryList_getMeta();}
void *igLibrary_getMeta(){
 if(!lbl_805619C4 || !(reinterpret_cast<unsigned int *>(lbl_805619C4)[0x24/4]&4)) fn_8002DA30();
 return lbl_805619C4;
}
void fn_8002DA30(){
 fn_80066188((int)igLibrary_register);
}
void igLibrary_register(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805619C4,(int)igObject_register,(int)fn_800237D0,(int)igLibrary_getMetaCall,(int)lbl_804653D0,12,0,(int)igLibrary_fieldInit,0,0);
}
void *igLibrary_getMetaCall(){return igLibrary_getMeta();}
void igLibrary_fieldInit(){
 void *value0=lbl_805619C4;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D394,1);
 fn_800659C0(value0,lbl_8055D398,lbl_8055D39C,lbl_8055D3A0,value1);
}
}
#pragma pop
