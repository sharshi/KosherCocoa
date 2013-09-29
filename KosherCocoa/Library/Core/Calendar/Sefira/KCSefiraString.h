//
//  SefiraString.h
//  UltimateOmer2
//
//  Created by Moshe Berman on 3/21/11.
//  Copyright 2011 MosheBerman.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KCSefiraString : NSObject

@property NSInteger day;

//
//
//

- (id)initWithDay:(NSInteger)tempDay;


//
//  This method returns a string in hebrew for the current day's number
//

- (NSString *)stringRepresentationForDay:(NSInteger)day;

//
//  This returns a string for today's middah in hebrew
//

- (NSString *)middahStringInHebrewForDay:(NSInteger)tempDay;

@end
