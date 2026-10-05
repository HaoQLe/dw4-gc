#include "unknown800442F8.h"
#pragma push
#pragma auto_inline off
extern "C" unsigned char fn_800450E0(Unknown800442F8Owner *object,const char *text,const char *value){
    if(!text) return 0;
    fn_80071F9C(object->unknown24,value);
    fn_800454C0(object,text);
    return 1;
}
extern "C" void fn_8004513C(Unknown800442F8Owner *object){ fn_80071FF4(object->unknown28); }
extern "C" Unknown800442F8Nodes *fn_80045160(Unknown800442F8Owner *object){
    int index;
    Unknown800442F8Nodes *storage=fn_800338FC(fn_80068430(object));
    object->unknown2C=1;
    object->unknown34=object->unknown28->unknown08.text();
    Unknown800442F8Node *value;
    do{
        value=fn_8004577C(object);
        if(value){
            index=storage->unknown08;
            if(index<storage->unknown0C) storage->unknown08=index+1;
            else fn_80041660(storage,index+1,4);
            storage->unknown10[index]=value;
        }
    }while(value);
    return storage;
}
extern "C" void fn_80045210(void *,Unknown800442F8Nodes *storage){
    for(int index=0;index<storage->unknown08;++index){
        Unknown800442F8Node *entry=storage->unknown10[index];
        delete entry;
        if(storage->unknown08!=0 && index>=0 && index<storage->unknown08) storage->unknown10[index]=NULL;
    }
    --storage->unknown04;
    if(!(reinterpret_cast<volatile unsigned int *>(storage)[1]&0x7FFFFF)) fn_80066E1C(storage);
}
extern "C" void *fn_800452CC(Unknown800442F8Node *object,short flag){
    if(object){
        reinterpret_cast<Unknown800442F8NodeVtable **>(object)[1]=reinterpret_cast<Unknown800442F8NodeVtable *>(lbl_80472C3C);
        if(flag>0) fn_800564E8(object);
    }
    return object;
}
extern "C" bool fn_80045314(Unknown800442F8Owner *object,void *first,void *second,void *third){
    Unknown800442F8Reference reference(fn_80026ADC(fn_80068430(object)));
    Unknown800442F8Nodes *storage=fn_80045160(object);
    for(int index=0;index<storage->unknown08;++index) fn_8004595C(object,storage->unknown10[index],reference.value,second);
    fn_8006D17C(first,reference.value,third);
    bool result=*object->unknown34==0;
    fn_80045210(object,storage);
    fn_8004513C(object);
    return result;
}
extern "C" unsigned char fn_80045404(){ return 1; }
extern "C" void fn_8004540C(Unknown800442F8Owner *object,Unknown800442F8Stream *stream){
    char buffer[0x1000];
    fn_8004513C(object);
    while(fn_800455F4(object,stream,buffer,0x1000)){
        char *p=buffer;
        while(*p){ if(*p==';'){ p[0]='\n';p[1]=0;break; }++p; }
        Unknown800442F8Stream *dest=object->unknown28;
        int offset=reinterpret_cast<int>(dest->unknown0C);
        fn_80072038(dest,buffer,offset,strlen(buffer));
    }
}
extern "C" void fn_800454C0(Unknown800442F8Owner *object,const char *text){
    char buffer[0x1000];
    fn_8004513C(object);
    while(fn_800456D4(object,&text,buffer,0x1000)){
        char *p=buffer;
        while(*p){ if(*p==';'){ p[0]='\n';p[1]=0;break; }++p; }
        Unknown800442F8Stream *dest=object->unknown28;
        int offset=reinterpret_cast<int>(dest->unknown0C);
        fn_80072038(dest,buffer,offset,strlen(buffer));
    }
}
extern "C" unsigned char fn_80045574(void *object){ fn_80071F9C(object,lbl_80468F64);return 1; }
extern "C" unsigned char fn_800455A0(void *object){ fn_80071F9C(object,lbl_8055D800);return 1; }
extern "C" unsigned char fn_800455C8(void *object){ fn_80071F9C(object,lbl_80468F64);return 1; }
extern "C" bool fn_800455F4(void *,Unknown800442F8Stream *stream,char *buffer,int capacity){
    char *p;
    int value=stream->slot84();
    p=buffer;
    int limit=capacity-2;
    int count=0;
    while(value!=-1 && value!='\n' && value!='\r' && value!=0){
        if(count<limit) *p=value;
        value=stream->slot84();
        ++count;++p;
    }
    if(count>capacity-2) count=capacity-2;
    buffer[count]='\n';buffer[count+1]=0;
    return count>0 || value!=-1;
}
inline char unknown800456D4Read(const char **text){ const char *old=*text; ++*text; return *old; }
extern "C" bool fn_800456D4(void *,const char **text,char *buffer,int capacity){
    int limit=capacity-2;
    int count=0;
    int value=unknown800456D4Read(text);
    while(value!='\n' && value!='\r' && value!=0){
        if(count<limit) buffer[count]=value;
        value=unknown800456D4Read(text);
        ++count;
    }
    if(count>capacity-2) count=capacity-2;
    buffer[count]='\n';buffer[count+1]=0;
    return count>0 || value!=0;
}
#pragma pop
