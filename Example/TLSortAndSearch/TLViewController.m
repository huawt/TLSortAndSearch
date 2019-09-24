//
//  TLViewController.m
//  TLSortAndSearch
//
//  Created by huawt on 08/13/2019.
//  Copyright (c) 2019 huawt. All rights reserved.
//

#import "TLViewController.h"
#import <TLSortAndSearch/TLSSHeader.h>

@interface TLViewController ()

@end

@implementation TLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    NSLog(@"%@", [PinYinForObjc chineseConvertToPinYinHead:@"华文涛"]);
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
