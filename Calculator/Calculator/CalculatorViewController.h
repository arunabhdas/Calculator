//
//  CalculatorViewController.h
//  Calculator
//
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *display;


- (IBAction)operationPressed:(UIButton *)sender;

- (IBAction)enterPressed;

- (IBAction)clearPressed:(id)sender;




@end
