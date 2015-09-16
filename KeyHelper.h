//
//  KeyHelper.h
//  SafeSound
//
//  Created by Aaron Mentele on 8/12/2015
//  Copyright 2015 Aaron Mentele. All rights reserved.
//

/*
 *	This class is a singleton providing globally accessible methods 
 *	and properties that may be needed by multiple classes wanting to map frequency
 *	values to pitches (e.g. A, Bb, C, F#, etc).
 */


#import <Foundation/Foundation.h>

@interface KeyHelper : NSObject {
	NSMutableDictionary *keyMapping;
	NSMutableDictionary *frequencyMapping;
}

@property(nonatomic, retain) NSMutableDictionary *keyMapping;
@property(nonatomic, retain) NSMutableDictionary *frequencyMapping;

#pragma mark Key Generation
- (void)buildKeyMapping;
- (NSString *)closestCharForFrequency:(float)frequency;

#pragma mark Singleton Methods
+ (KeyHelper *)sharedInstance;


@end