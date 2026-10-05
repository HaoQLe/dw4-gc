#include "unknown800496E8.h"
#include "unknown8004A41C.h"
#pragma push
#pragma auto_inline off
extern "C" {
int strcmp(const char *,const char *);
const char *strstr(const char *,const char *);
void *memset(void *,int,unsigned int);
}
extern "C" {
extern char lbl_804662AC[],lbl_804662C4[],lbl_80466354[],lbl_804663C8[],lbl_804663D8[],lbl_804663E4[],lbl_804663F0[],lbl_804663FC[],lbl_80466408[],lbl_80466418[],lbl_80466424[],lbl_80466434[],lbl_80466444[],lbl_80466450[],lbl_8046645C[],lbl_8046646C[],lbl_8046647C[],lbl_8046648C[],lbl_80466498[],lbl_804664B8[],lbl_8046657C[],lbl_8046658C[],lbl_804665A0[],lbl_804665B0[],lbl_804665C4[],lbl_804665D0[],lbl_804665E0[],lbl_804665F4[],lbl_80466604[],lbl_80466618[],lbl_80466624[],lbl_80466634[],lbl_80466640[],lbl_80466650[],lbl_8055D4C4[],lbl_8055D4D0[],lbl_8055D4D8[],lbl_8055D838[],lbl_8055D840[];
struct Unknown80469070{char unknown00[12];const char *unknown0C[64];};
struct Unknown8046917C{char unknown00[16];const char *unknown10[16];};
struct Unknown804691CC{char unknown00[24];const char *unknown18[64];};
Unknown80469070 lbl_80469070={"MemoryData",{lbl_8046657C,lbl_8046658C,lbl_804665A0,lbl_804665B0,lbl_804665C4,lbl_804665D0,lbl_804665E0,lbl_804665F4,lbl_80466604,lbl_80466618,lbl_80466624,lbl_80466634,lbl_80466640,lbl_8055D4D0,lbl_80466650,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_8055D4D8,lbl_804663C8,lbl_804663D8,lbl_804663E4,lbl_804663F0,lbl_804663FC,lbl_80466408,lbl_80466418,lbl_80466424,lbl_80466434,lbl_80466444,lbl_80466450,lbl_8046645C,lbl_8046646C,lbl_8046647C,lbl_8046648C,lbl_80466498,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8,lbl_804664B8}};
#pragma force_active on
Unknown8046917C lbl_8046917C={"Informational",{lbl_8055D4C4,lbl_8046917C.unknown00,lbl_8055D838,lbl_8055D840,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354,lbl_80466354}};
Unknown804691CC lbl_804691CC={"kNotificationReserved",{lbl_804662AC,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804691CC.unknown00,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4,lbl_804662C4}};
#pragma force_active reset
char lbl_804692E4[16]="Double-deletion";
}
inline void unknown800496E8Walk(Unknown800496E8Owner *object,int start,int end,unsigned int *active,Unknown800496E8Record *record,int size){
 int i=0;
 for(;i<size;++i){
  int item=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(item!=-1){
   const Unknown80042DECResult &result=object->slot6C(item,record);
   if(result.unknown00!=kFailure__3Gap && record->unknown04>=start && record->unknown04<=end && record->unknown00!=3 && record->unknown00!=8 && record->unknown00!=2 && record->unknown00!=7) ++*active;
  }
 }
}
extern "C" {
void fn_800496E8(Unknown800496E8Owner *object,int start,int end,unsigned int *records,unsigned int *histogram,unsigned int *active,unsigned int *a,unsigned int *b,unsigned int *difference,unsigned int *maximum,unsigned int *largest,unsigned int *first,int firstTag,int firstIndex,unsigned int *second,int secondTag,int secondIndex){
 int count=0,offset=0;
 Unknown800496E8Record record;
 int size=object->unknown54->unknown08;
 int firstCount=-1,secondCount=-1;
 if(end==-1) end=object->unknown28-1;
 *records=0;
 if(histogram) memset(histogram,0,0x80);
 *active=0;*a=0;*b=0;*difference=0;*maximum=0;*largest=0;*first=0;*second=0;
 for(;count<start;++count) offset=object->slot88(offset);
 do {
  const Unknown80042DECResult &result=object->slot6C(offset,&record);
  if(result.unknown00!=kSuccess__3Gap) break;
  int kind=record.unknown00;
  ++*records;
  if(histogram && kind>=0 && kind<32) ++histogram[kind];
  switch(kind){
   case 1:
    *a+=record.unknown0C;*difference=*a-*b;
    if(*difference>*maximum) *maximum=*difference;
    if(static_cast<unsigned int>(record.unknown0C)>*largest) *largest=record.unknown0C;
    break;
   case 3:
    *b+=record.unknown0C;*difference=*a-*b;
    break;
   case 13:
    if(firstTag==record.unknown14){++firstCount;if(firstCount==firstIndex || firstIndex==-1) *first=*difference;}
    if(secondTag==record.unknown14){++secondCount;if(secondCount==secondIndex || secondIndex==-1) *second=*difference;}
    break;
   case 0:case 2:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 14:case 15:default:break;
  }
  offset=object->slot88(offset);++count;
 }while(count<end && offset!=-1);
 unknown800496E8Walk(object,start,end,active,&record,size);
}
void fn_80049A2C(Unknown800496E8Owner *object,int start,int end,const char *name,unsigned int *a,unsigned int *b,unsigned int *c,unsigned int *d){
 int count=0,offset=0;
 Unknown800496E8Record record;
 if(end==-1) end=object->unknown28-1;
 *a=0;*b=0;*c=0;*d=0;
 for(;count<start;++count) offset=object->slot88(offset);
 do {
  const Unknown80042DECResult &result=object->slot6C(offset,&record);
  if(result.unknown00!=kSuccess__3Gap) break;
  if(record.unknown30 && *record.unknown30 && !strcmp(record.unknown30,name)){
   switch(record.unknown00){case 6:++*a;*c+=record.unknown0C;break;case 8:++*b;*d+=record.unknown0C;break;}
  }
  offset=object->slot88(offset);++count;
 }while(count<end && offset!=-1);
}
int fn_80049BD0(Unknown800496E8Owner *object,unsigned int key){
 int size,index,offset,count;
 index=object->slotC0(key);
 count=0;
 size=object->unknown54->unknown08;
 do {
  offset=reinterpret_cast<int *>(object->unknown54->unknown10)[index];
  if(offset==-1) return -1;
  unsigned int value;
  object->slot74(offset,&value);
  if(value==key) return offset;
  if(++index>=size) index=0;
 }while(++count<size);
 return -1;
}
int fn_80049C98(Unknown800496E8Owner *object,int offset){
 Unknown80042DECStorage *storage=object->unknown50;
 int size=storage->unknown08;
 if(offset>size) return -1;
 const char *p=reinterpret_cast<const char *>(storage->unknown10)+offset;
 if(static_cast<unsigned int>(*p)>=32) return -1;
 int count=p[1];
 if(count>lbl_8055D81C) return -1;
 offset+=count+2;
 return offset>=size ? -1 : offset;
}
int fn_80049D08(Unknown800496E8Owner *object){
 Unknown800496E8Lock lock(object->unknown08);
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 int i;int count=0;
 for(i=0;i<size;++i){
  int offset=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(offset!=-1){
   const Unknown80042DECResult &result=object->slot6C(offset,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown00!=8 && record.unknown00!=2 && record.unknown00!=7) ++count;
  }
 }
 return count;
}
int fn_80049E28(Unknown800496E8Owner *object,int *index){
 Unknown800496E8Lock lock(object->unknown08);
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 while(*index<size){
  int offset=reinterpret_cast<int *>(object->unknown54->unknown10)[*index];
  if(offset!=-1){
   const Unknown80042DECResult &result=object->slot6C(offset,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown00!=8 && record.unknown00!=2 && record.unknown00!=7){++*index;return offset;}
  }
  ++*index;
 }
 return -1;
}
void fn_80049F8C(Unknown800496E8Owner *object,const char *name){
 Unknown800496E8Lock lock(object->unknown08);
 int size=object->unknown54->unknown08;
 Unknown800496E8Record record;
 if(!object->unknown5C->slot64()) return;
 for(int i=0;i<size;++i){
  int offset=reinterpret_cast<int *>(object->unknown54->unknown10)[i];
  if(offset!=-1){
   const Unknown80042DECResult &result=object->slot6C(offset,&record);
   if(result.unknown00!=kFailure__3Gap && record.unknown00!=3 && record.unknown4C){
   char text[0x100];int a,b;
   while(*record.unknown4C){
    object->slotA0(*record.unknown4C,text,0xFF,&a,NULL,0,&b);
    if(!strcmp(text,lbl_8055D848)) break;
    if(strstr(text,name)){record.unknown00=3;record.unknown44=NULL;record.unknown48=0;object->slot68(&record,-1);}
    ++record.unknown4C;
   }
  }
  }
 }
}
unsigned int fn_8004A190(Unknown800496E8Owner *object,unsigned int key){int size=object->unknown54->unknown08;return size ? key%size : 0;}
void fn_8004A1B8(Unknown800496E8Owner *object,unsigned int key,int offset){
 int scaledIndex,size,index,count,limit;
 for(;;){
  count=0;size=unknown800496E8Size(object->unknown54);
  limit=size/2;
  if(!size) return;
  index=object->slotC0(key);
  do {
   scaledIndex=index*4;
   int old=*reinterpret_cast<int *>(reinterpret_cast<char *>(object->unknown54->unknown10)+scaledIndex);
   if(old==-1){unknown800496E8Store(object->unknown54,index,offset);return;}
   unsigned int value;
   object->slot74(old,&value);
   if(value==key){unknown800496E8Store(object->unknown54,index,offset);return;}
   if(++index>=size) index=0;
  }while(++count<limit);
  object->slotC8(size*2);
 }
}
void fn_8004A2F0(Unknown800496E8Owner *object,int size){
 fn_800472FC(object,size);
 if(size>=object->unknown54->unknown08) fn_8004155C(object->unknown54,size,4);
 Unknown80042DECStorage *storage=object->unknown54;
 if(size>=0){if(size<=storage->unknown0C) storage->unknown08=size;else fn_80041660(storage,size,4);}
 int count=object->unknown54->unknown08;
 int *entries=reinterpret_cast<int *>(object->unknown54->unknown10);
 for(int i=0;i<count;++i) entries[i]=lbl_8055D850;
 const char *begin=reinterpret_cast<const char *>(object->unknown50->unknown10);
 const char *end;const char *p=begin;
 end=begin+object->unknown50->unknown08;
 while(p<end){
  char length=p[1];int offset=p-begin;unsigned int value;
  p+=2;
  const Unknown80042DECResult &result=object->slot74(offset,&value);
  if(result.unknown00==kSuccess__3Gap) object->slotC4(value,offset);
  p+=length;
 }
}
}
#pragma force_active on
extern "C" char lbl_80469334[0x50]="igObject::internalRelease\0\0\0igObject::release\0\0\0::~igSmartPointer<\0\0(Unknown)\0\0";
#pragma force_active reset
inline int unknown8004A41CNext(const char *&p){return *p++;}
inline void unknown8004A41CDecimal(char *buffer,const char *custom,int value){sprintf(buffer,*custom ? custom : lbl_8055D7C0,value);}
template <class T> inline void unknown8004A41CFormatted(char *buffer,const char *custom,T value,const char *fallback){sprintf(buffer,*custom ? custom : fallback,value);}
template <class T> inline void unknown8004A41CAppend(char *buffer,const char *format,T value){sprintf(buffer+strlen(buffer),format,value);}
extern "C" char *fn_8004A41C(Unknown800496E8Owner *object,const Unknown800496E8Record *source,char *output,int capacity){
 const char *data=lbl_80463100;
 char name[0x100],piece[0x100],description[0x100];
 Unknown800496E8Record record(*source);
 char format[0x80],extra[0x80];
 int code,length;
 void **entry;
 if(capacity && output) *output=0;
 if(!source) return output;
 const char *p=fn_8004B394(object,source->unknown00);
 if(!p || !*p){
  switch(source->unknown00){
   case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:{const char *fallback=*reinterpret_cast<const char **>(reinterpret_cast<char *>(object)+0xE0);if(fallback && *fallback) p=fallback;else p=lbl_8055D824;break;}
   case 13:p=lbl_8055D828;break;
   case 14:p=lbl_8055D82C;break;
   case 15:default:p=lbl_8055D830;break;
  }
 }
 switch(record.unknown00){
  case 8:
   if((!record.unknown44 || !*record.unknown44) && record.unknown4C){
    entry=record.unknown4C;
    for(;*entry;++entry){
     object->slotA0(*entry,name,0xFF,&code,description,0xFF,&length);
     if(!strstr(name,data+0x6234) && !strstr(name,data+0x6250) && !strstr(name,data+0x6264)){record.unknown44=description;record.unknown48=length;record.unknown4C=entry;break;}
    }
   }
   break;
 }
 int limit=capacity;
 while(*p){
  char letter=*p++;
  format[0]=0;extra[0]=0;
  int index=-1;
  if(*p>='0' && *p<='9'){index=0;while(*p>='0' && *p<='9'){index=*p+10*index;index-='0';++p;}}
  if(letter!='"'){
   while(*p=='\'' || *p=='^'){
    if(*p=='\'') {int count=0;++p;
 while(*p && *p!='\'' && count<0x7F){
  if(*p=='\\'){
   switch(*++p){case 'n':format[count++]=10;break;case 'r':format[count++]=13;break;case 't':format[count++]=9;break;}
  }else format[count++]=*p;
  ++p;
 }
 format[count]=0;if(*p=='\'') ++p;}
    if(*p=='^') {int count=0;++p;
 while(*p && *p!='^' && count<0x7F){
  if(*p=='\\'){
   switch(*++p){case 'n':extra[count++]=10;break;case 'r':extra[count++]=13;break;case 't':extra[count++]=9;break;}
  }else extra[count++]=*p;
  ++p;
 }
 extra[count]=0;if(*p=='^') ++p;}
   }
  }
  piece[0]=0;
  switch(letter){
   case 'a':unknown8004A41CFormatted(piece,format,record.unknown08,lbl_8055D7B8);break;
   case 'c':{
    entry=record.unknown4C;
    if(entry){for(;*entry;++entry){
     object->slot9C(*entry,extra,name,0xFF);
     unknown8004A41CFormatted(piece,format,name,lbl_8055D854);
     strncat(output,piece,limit);if(capacity) output[capacity-1]=0;piece[0]=0;
     if(!strncmp(name,lbl_8055D848,4) || strstr(name,lbl_8055D858)) break;
    }}break;
   }
   case 'd':{
    int end;
    if(index!=-1) end=index+1;else{index=0;end=fn_8004C0E4(&record);}
    piece[0]=0;
    for(;index<end;++index){
     switch(fn_8004C11C(&record,index)){
      case 1:{const char *f=(*format ? format : lbl_8055D7C0);sprintf(piece+strlen(piece),f,fn_8004C140(&record,index));break;}
      case 2:{const char *f=(*format ? format : lbl_8055D860);sprintf(piece+strlen(piece),f,fn_8004C19C(&record,index));break;}
      case 3:{const char *text=fn_8004C1F8(&record,index) ? fn_8004C1F8(&record,index) : lbl_8055D4C4;const char *f=(*format ? format : lbl_8055D7AC);unknown8004A41CAppend(piece,f,text);break;}
      case 0:default:continue;
     }
     if(index<end-1) strcat(piece,lbl_8055D864);
    }
    break;
   }
   case 'e':unknown8004A41CDecimal(piece,format,record.unknown10);break;
   case 'f':{
    if(record.unknown44 && *record.unknown44){
     const char *backslash=strrchr(record.unknown44,'\\');const char *slash=strrchr(record.unknown44,'/');const char *text;
     if(backslash && slash) text=backslash>slash ? backslash : slash;else if(backslash) text=backslash;else text=slash;
     if(text) ++text;else text=record.unknown44;
     if(text && *text) unknown8004A41CFormatted(piece,format,text,lbl_8055D7AC);
    }break;
   }
   case 'g':if(record.unknown2C && *record.unknown2C) unknown8004A41CFormatted(piece,format,record.unknown2C,lbl_8055D7AC);break;
   case 'i':unknown8004A41CDecimal(piece,format,record.unknown04);break;
   case 'j':{
    if(record.unknown3C && *record.unknown3C) unknown8004A41CFormatted(piece,format,record.unknown3C,lbl_8055D7AC);
    else if(fn_8004C0E4(&record)==3){Unknown8004A41CValue value;fn_8004C24C(&record,0,&value);if(value.unknown08) unknown8004A41CFormatted(piece,format,value.unknown08,lbl_8055D7C0);}
    break;
   }
   case 'k':{
    char kind;
    switch(record.unknown00){
     case 1:kind='+';break;case 2:kind='*';break;case 3:kind='-';break;case 4:kind='<';break;case 5:kind='>';break;case 6:kind='o';break;case 7:kind='t';break;case 8:kind='d';break;case 9:kind='r';break;case 10:kind='w';break;case 11:kind='r';break;case 12:kind='w';break;case 13:kind='m';break;case 14:kind='n';break;case 0:case 15:default:kind='c';break;
    }
    unknown8004A41CFormatted(piece,format,kind,lbl_8055D7D0);break;
   }
   case 'l':unknown8004A41CDecimal(piece,format,record.unknown48);break;
   case 'm':if(record.unknown34 && *record.unknown34) unknown8004A41CFormatted(piece,format,record.unknown34,lbl_8055D7AC);break;
   case 'n':if(record.unknown38 && *record.unknown38) unknown8004A41CFormatted(piece,format,record.unknown38,lbl_8055D7AC);break;
   case 'o':if(record.unknown30 && *record.unknown30) unknown8004A41CFormatted(piece,format,record.unknown30,lbl_8055D7AC);break;
   case 'p':if(record.unknown44 && *record.unknown44) unknown8004A41CFormatted(piece,format,record.unknown44,lbl_8055D7AC);break;
   case 'q':if(record.unknown40 && *record.unknown40) unknown8004A41CFormatted(piece,format,record.unknown40,lbl_8055D7AC);break;
   case 'r':{
    entry=record.unknown4C;
    if(entry){while(*entry){
     object->slot9C(*entry,extra,name,0xFF);
     unknown8004A41CFormatted(piece,format,name,lbl_8055D7AC);
     ++entry;if(*entry && !*format) strcat(piece,lbl_8055D864);
     strncat(output,piece,limit);if(capacity) output[capacity-1]=0;piece[0]=0;
     if(!strncmp(name,lbl_8055D848,4) || strstr(name,lbl_8055D858)) break;
    }}break;
   }
   case 's':unknown8004A41CFormatted(piece,format,record.unknown0C,lbl_8055D868);break;
   case 't':{const char *text=fn_8004B3E4(object,record.unknown00);if(!text) text=data+0x6278;unknown8004A41CFormatted(piece,format,text,lbl_8055D7AC);break;}
   case 'u':if(record.unknown14){const char *text=fn_8004B434(object,record.unknown14);if(!text) text=data+0x6278;unknown8004A41CFormatted(piece,format,text,lbl_8055D7AC);}break;
   case 'v':
    if(record.unknown18) unknown8004A41CDecimal(piece,format,record.unknown18);
    else if(fn_8004C0E4(&record)==3){Unknown8004A41CValue value;fn_8004C24C(&record,0,&value);sprintf(piece,*format ? format : lbl_8055D7C0,value.unknown04);}break;
   case 'w':
    if(reinterpret_cast<const char *>(record.unknown1C)) unknown8004A41CFormatted(piece,format,record.unknown1C,lbl_8055D7AC);
    else if(fn_8004C0E4(&record)==3){Unknown8004A41CValue value;fn_8004C24C(&record,0,&value);sprintf(piece,*format ? format : lbl_8055D860,value.unknown00);}break;
   case 'x':if(record.unknown20){const char *text=fn_8004B484(object,record.unknown20);if(!text) text=data+0x6278;unknown8004A41CFormatted(piece,format,text,lbl_8055D7AC);}break;
   case 'y':if(record.unknown24){const char *text=fn_8004B4D4(object,record.unknown24);if(text) unknown8004A41CFormatted(piece,format,text,lbl_8055D7AC);else unknown8004A41CDecimal(piece,format,record.unknown24);}break;
   case 'z':if(reinterpret_cast<const char *>(record.unknown28)) unknown8004A41CFormatted(piece,format,record.unknown28,lbl_8055D7AC);break;
   case '\\':switch(*p++){case 'n':strcpy(piece,lbl_8055D7C4);break;case 'r':strcpy(piece,lbl_8055D7C8);break;case 't':strcpy(piece,lbl_8055D7CC);break;}break;
   case '"':{
    while(*p && *p!='"'){
     if(*p=='\\'){switch(*++p){case 'n':strcat(piece,lbl_8055D7C4);break;case 'r':strcat(piece,lbl_8055D7C8);break;case 't':strcat(piece,lbl_8055D7CC);break;}}
     else sprintf(piece+strlen(piece),lbl_8055D7D0,*p);
     ++p;
    }
    if(*p=='"') ++p;
    break;
   }
   default:sprintf(piece,lbl_8055D7D0,letter);break;
  }
  strncat(output,piece,limit);
 }
 strncat(output,lbl_8055D7C4,capacity);
 if(capacity>1) output[capacity-2]=10;
 if(capacity) output[capacity-1]=0;
 return output;
}
#pragma pop
