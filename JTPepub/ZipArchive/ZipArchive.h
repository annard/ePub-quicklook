//
//  ZipArchive.h
//  
//  This was originaly ZipArchive:
//
//  Created by aish on 08-9-11.
//  acsolu@gmail.com
//  Copyright 2008  Inc. All rights reserved.
//
// - I've pretty much hacked it apart to make it suitble for use here - It was a great help with getting the hang of the minizip code in a cocoa context though.


#import <Foundation/Foundation.h>

#include "minizip/zip.h"
#include "minizip/unzip.h"


@protocol ZipArchiveDelegate <NSObject>
@optional
-(void) ErrorMessage:(NSString*) msg;
-(BOOL) OverWriteOperation:(NSString*) file;

@end


@interface ZipArchive : NSObject

-(instancetype) initWithZipFile:(NSString *)fileName NS_DESIGNATED_INITIALIZER;

-(BOOL) openZipFile:(NSString *)fileName;
-(BOOL) closeZipFile;

-(BOOL) testForNamedFile:(NSString *)fileName;

-(NSData *) dataForNamedFile:(NSString *)fileName;

@end
