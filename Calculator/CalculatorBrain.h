//
//  CalculatorBrain.h
//  Calculator
//
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void) clear;

+ (double) popOperandOffStack : (NSMutableArray *) stack;

- (void) pushOperand : (double) operand;


- (double) performOperation : (NSString *) operation;

@property (readonly) id program;

+ (double) runProgram : (id) program;

+ (NSString *) descriptionOfProgram : (id) program;

@end
