//
//  iMag.h
//
//  iMag SDK 2.9
//  Modified by XinHu Li on 3/09/16
//  Copyright 2016 ID TECH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import	<ExternalAccessory/ExternalAccessory.h>

#define IMLOG_INFO     @"[IM Info] "

@interface iMag : NSObject <EAAccessoryDelegate, NSStreamDelegate> {

	EASession *session;
}


-(id)init;


@property (readonly) BOOL iMagConnected;

-(NSData*) SendCMD:(NSData*)writeBuf;
-(NSData*) SendCMDGetVersion;
-(NSData*) SendCMDGetSerialNumber;

+(void) enableLogging:(BOOL)enable;

@end
