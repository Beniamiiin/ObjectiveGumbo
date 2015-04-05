//
//  OGElement.h
//  ObjectiveGumbo
//
//  Copyright (c) 2013 Programming Thomas. All rights reserved.
//

#import "OGNode.h"

@interface OGElement : OGNode

@property GumboTag tag;
@property GumboNamespaceEnum tagNamespace;

@property NSArray * children;
@property NSArray * classes;
@property NSDictionary * attributes;

-(OGElement*)elementWithMultipleClass:(NSString*)classes;
-(NSArray*)elementsWithAttribute:(NSString *)attribute andValue:(NSString *)value;

@end
