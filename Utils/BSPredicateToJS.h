//
//  BSPredicateToJS.h
//  BeardedSpice
//
//  Created by Roman Sokolov on 20.08.17.
//  Copyright © 2017 BeardedSpice. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BSPredicateToJS : NSObject

/**
 Converts NSPredicate to condition on javascript.

 @param predicate Predicate for convertion.
 @return Condition in javascript, if error occurs return @"false".
 */
+ (NSString *)jsFromPredicate:(NSPredicate *)predicate;
/**
 Returns implementation of the javascript functions,
 which are used in javascript from predicate.
 Add this to javascript code before using conditions,
 which were converted from predicates.
 
 @return Javascript helper functions.
 */
+ (NSString *)jsFunctions;

@end
