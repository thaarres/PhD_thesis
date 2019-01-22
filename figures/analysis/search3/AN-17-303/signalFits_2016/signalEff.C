void signalEff()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 13:56:17 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(536.5714,-0.0556701,5706.81,0.3309278);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.144);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TF1 *func1 = new TF1("func","pol5",1200,5500);
   func1->SetBit(TF1::kNotDraw);
   func1->SetFillColor(19);
   func1->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   func1->SetMarkerColor(ci);
   func1->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1->SetLineColor(ci);
   func1->SetLineWidth(3);
   func1->SetChisquare(7.424516);
   func1->SetNDF(6);
   func1->GetXaxis()->SetTitle("M_{X} (GeV)");
   func1->GetXaxis()->SetRange(0,100);
   func1->GetXaxis()->SetNdivisions(209);
   func1->GetXaxis()->SetLabelFont(42);
   func1->GetXaxis()->SetLabelOffset(0.007);
   func1->GetXaxis()->SetLabelSize(0.05);
   func1->GetXaxis()->SetTitleSize(0.06);
   func1->GetXaxis()->SetTitleOffset(0.94);
   func1->GetXaxis()->SetTitleFont(42);
   func1->GetYaxis()->SetTitle("Signal efficiency");
   func1->GetYaxis()->SetNdivisions(504);
   func1->GetYaxis()->SetLabelFont(42);
   func1->GetYaxis()->SetLabelOffset(0.007);
   func1->GetYaxis()->SetLabelSize(0.05);
   func1->GetYaxis()->SetTitleSize(0.06);
   func1->GetYaxis()->SetTitleOffset(0.97);
   func1->GetYaxis()->SetTitleFont(42);
   func1->SetParameter(0,0.005997929);
   func1->SetParError(0,0.03220511);
   func1->SetParLimits(0,0,0);
   func1->SetParameter(1,-2.828269e-05);
   func1->SetParError(1,6.375317e-05);
   func1->SetParLimits(1,0,0);
   func1->SetParameter(2,5.917512e-08);
   func1->SetParError(2,4.694912e-08);
   func1->SetParLimits(2,0,0);
   func1->SetParameter(3,-3.082723e-11);
   func1->SetParError(3,1.612094e-11);
   func1->SetParLimits(3,0,0);
   func1->SetParameter(4,6.796598e-15);
   func1->SetParError(4,2.599832e-15);
   func1->SetParLimits(4,0,0);
   func1->SetParameter(5,-5.372318e-19);
   func1->SetParError(5,1.587967e-19);
   func1->SetParLimits(5,0,0);
   func1->Draw("C");
   
   Double_t _fx1001[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1001[12] = {
   0.08679338,
   0.1000877,
   0.1034028,
   0.1091841,
   0.1095508,
   0.1187558,
   0.115614,
   0.1180079,
   0.1225125,
   0.121864,
   0.1225365,
   0.0535342};
   Double_t _fex1001[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1001[12] = {
   0.001762097,
   0.001894028,
   0.001922094,
   0.001977525,
   0.001978322,
   0.002065543,
   0.002035419,
   0.002054792,
   0.002092409,
   0.002086949,
   0.002092507,
   0.001384896};
   TGraphErrors *gre = new TGraphErrors(12,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,770,5930);
   Graph_Graph1001->SetMinimum(0.04490134);
   Graph_Graph1001->SetMaximum(0.131877);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *func1002 = new TF1("func","pol5",1200,5500);
   func1002->SetBit(TF1::kNotDraw);
   func1002->SetFillColor(19);
   func1002->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1002->SetMarkerColor(ci);
   func1002->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   func1002->SetLineColor(ci);
   func1002->SetLineWidth(3);
   func1002->SetLineStyle(9);
   func1002->SetChisquare(24.02556);
   func1002->SetNDF(6);
   func1002->GetXaxis()->SetLabelFont(42);
   func1002->GetXaxis()->SetLabelOffset(0.007);
   func1002->GetXaxis()->SetLabelSize(0.05);
   func1002->GetXaxis()->SetTitleSize(0.06);
   func1002->GetXaxis()->SetTitleOffset(0.9);
   func1002->GetXaxis()->SetTitleFont(42);
   func1002->GetYaxis()->SetLabelFont(42);
   func1002->GetYaxis()->SetLabelOffset(0.007);
   func1002->GetYaxis()->SetLabelSize(0.05);
   func1002->GetYaxis()->SetTitleSize(0.06);
   func1002->GetYaxis()->SetTitleOffset(1.25);
   func1002->GetYaxis()->SetTitleFont(42);
   func1002->SetParameter(0,0.1428379);
   func1002->SetParError(0,0.05956013);
   func1002->SetParLimits(0,0,0);
   func1002->SetParameter(1,-0.0002199807);
   func1002->SetParError(1,0.000115203);
   func1002->SetParLimits(1,0,0);
   func1002->SetParameter(2,2.510541e-07);
   func1002->SetParError(2,8.302597e-08);
   func1002->SetParLimits(2,0,0);
   func1002->SetParameter(3,-1.115931e-10);
   func1002->SetParError(3,2.797027e-11);
   func1002->SetParLimits(3,0,0);
   func1002->SetParameter(4,2.180988e-14);
   func1002->SetParError(4,4.437391e-15);
   func1002->SetParLimits(4,0,0);
   func1002->SetParameter(5,-1.562622e-18);
   func1002->SetParError(5,2.672753e-19);
   func1002->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1002);
   gre->Draw("p");
   
   Double_t _fx1003[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1003[12] = {
   0.0164497,
   0.02164873,
   0.02574979,
   0.02653381,
   0.03121944,
   0.0375585,
   0.04028965,
   0.04906153,
   0.05610295,
   0.06296949,
   0.06018376,
   0.02704775};
   Double_t _fex1003[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1003[12] = {
   0.0007644345,
   0.0008776345,
   0.0009565946,
   0.0009693735,
   0.001050881,
   0.001155198,
   0.001198213,
   0.00131818,
   0.001410576,
   0.001494007,
   0.001461925,
   0.000978545};
   gre = new TGraphErrors(12,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,770,5930);
   Graph_Graph1003->SetMinimum(0.01080745);
   Graph_Graph1003->SetMaximum(0.06934132);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *func1004 = new TF1("func","pol5",1200,5500);
   func1004->SetBit(TF1::kNotDraw);
   func1004->SetFillColor(19);
   func1004->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1004->SetMarkerColor(ci);
   func1004->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1004->SetLineColor(ci);
   func1004->SetLineWidth(3);
   func1004->SetChisquare(7.424516);
   func1004->SetNDF(6);
   func1004->GetXaxis()->SetTitle("M_{X} (GeV)");
   func1004->GetXaxis()->SetRange(0,100);
   func1004->GetXaxis()->SetNdivisions(209);
   func1004->GetXaxis()->SetLabelFont(42);
   func1004->GetXaxis()->SetLabelOffset(0.007);
   func1004->GetXaxis()->SetLabelSize(0.05);
   func1004->GetXaxis()->SetTitleSize(0.06);
   func1004->GetXaxis()->SetTitleOffset(0.94);
   func1004->GetXaxis()->SetTitleFont(42);
   func1004->GetYaxis()->SetTitle("Signal efficiency");
   func1004->GetYaxis()->SetNdivisions(504);
   func1004->GetYaxis()->SetLabelFont(42);
   func1004->GetYaxis()->SetLabelOffset(0.007);
   func1004->GetYaxis()->SetLabelSize(0.05);
   func1004->GetYaxis()->SetTitleSize(0.06);
   func1004->GetYaxis()->SetTitleOffset(0.97);
   func1004->GetYaxis()->SetTitleFont(42);
   func1004->SetParameter(0,0.005997929);
   func1004->SetParError(0,0.03220511);
   func1004->SetParLimits(0,0,0);
   func1004->SetParameter(1,-2.828269e-05);
   func1004->SetParError(1,6.375317e-05);
   func1004->SetParLimits(1,0,0);
   func1004->SetParameter(2,5.917512e-08);
   func1004->SetParError(2,4.694912e-08);
   func1004->SetParLimits(2,0,0);
   func1004->SetParameter(3,-3.082723e-11);
   func1004->SetParError(3,1.612094e-11);
   func1004->SetParLimits(3,0,0);
   func1004->SetParameter(4,6.796598e-15);
   func1004->SetParError(4,2.599832e-15);
   func1004->SetParLimits(4,0,0);
   func1004->SetParameter(5,-5.372318e-19);
   func1004->SetParError(5,1.587967e-19);
   func1004->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1004);
   gre->Draw("p");
   
   TF1 *func1005 = new TF1("func","pol5",1200,5500);
   func1005->SetBit(TF1::kNotDraw);
   func1005->SetFillColor(19);
   func1005->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1005->SetMarkerColor(ci);
   func1005->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1005->SetLineColor(ci);
   func1005->SetLineWidth(3);
   func1005->SetChisquare(7.424516);
   func1005->SetNDF(6);
   func1005->GetXaxis()->SetTitle("M_{X} (GeV)");
   func1005->GetXaxis()->SetRange(0,100);
   func1005->GetXaxis()->SetNdivisions(209);
   func1005->GetXaxis()->SetLabelFont(42);
   func1005->GetXaxis()->SetLabelOffset(0.007);
   func1005->GetXaxis()->SetLabelSize(0.05);
   func1005->GetXaxis()->SetTitleSize(0.06);
   func1005->GetXaxis()->SetTitleOffset(0.94);
   func1005->GetXaxis()->SetTitleFont(42);
   func1005->GetYaxis()->SetTitle("Signal efficiency");
   func1005->GetYaxis()->SetNdivisions(504);
   func1005->GetYaxis()->SetLabelFont(42);
   func1005->GetYaxis()->SetLabelOffset(0.007);
   func1005->GetYaxis()->SetLabelSize(0.05);
   func1005->GetYaxis()->SetTitleSize(0.06);
   func1005->GetYaxis()->SetTitleOffset(0.97);
   func1005->GetYaxis()->SetTitleFont(42);
   func1005->SetParameter(0,0.005997929);
   func1005->SetParError(0,0.03220511);
   func1005->SetParLimits(0,0,0);
   func1005->SetParameter(1,-2.828269e-05);
   func1005->SetParError(1,6.375317e-05);
   func1005->SetParLimits(1,0,0);
   func1005->SetParameter(2,5.917512e-08);
   func1005->SetParError(2,4.694912e-08);
   func1005->SetParLimits(2,0,0);
   func1005->SetParameter(3,-3.082723e-11);
   func1005->SetParError(3,1.612094e-11);
   func1005->SetParLimits(3,0,0);
   func1005->SetParameter(4,6.796598e-15);
   func1005->SetParError(4,2.599832e-15);
   func1005->SetParLimits(4,0,0);
   func1005->SetParameter(5,-5.372318e-19);
   func1005->SetParError(5,1.587967e-19);
   func1005->SetParLimits(5,0,0);
   func1005->Draw("Csame");
   
   TF1 *func1006 = new TF1("func","pol5",1200,5500);
   func1006->SetBit(TF1::kNotDraw);
   func1006->SetFillColor(19);
   func1006->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1006->SetMarkerColor(ci);
   func1006->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   func1006->SetLineColor(ci);
   func1006->SetLineWidth(3);
   func1006->SetLineStyle(9);
   func1006->SetChisquare(24.02556);
   func1006->SetNDF(6);
   func1006->GetXaxis()->SetLabelFont(42);
   func1006->GetXaxis()->SetLabelOffset(0.007);
   func1006->GetXaxis()->SetLabelSize(0.05);
   func1006->GetXaxis()->SetTitleSize(0.06);
   func1006->GetXaxis()->SetTitleOffset(0.9);
   func1006->GetXaxis()->SetTitleFont(42);
   func1006->GetYaxis()->SetLabelFont(42);
   func1006->GetYaxis()->SetLabelOffset(0.007);
   func1006->GetYaxis()->SetLabelSize(0.05);
   func1006->GetYaxis()->SetTitleSize(0.06);
   func1006->GetYaxis()->SetTitleOffset(1.25);
   func1006->GetYaxis()->SetTitleFont(42);
   func1006->SetParameter(0,0.1428379);
   func1006->SetParError(0,0.05956013);
   func1006->SetParLimits(0,0,0);
   func1006->SetParameter(1,-0.0002199807);
   func1006->SetParError(1,0.000115203);
   func1006->SetParLimits(1,0,0);
   func1006->SetParameter(2,2.510541e-07);
   func1006->SetParError(2,8.302597e-08);
   func1006->SetParLimits(2,0,0);
   func1006->SetParameter(3,-1.115931e-10);
   func1006->SetParError(3,2.797027e-11);
   func1006->SetParLimits(3,0,0);
   func1006->SetParameter(4,2.180988e-14);
   func1006->SetParError(4,4.437391e-15);
   func1006->SetParLimits(4,0,0);
   func1006->SetParameter(5,-1.562622e-18);
   func1006->SetParError(5,2.672753e-19);
   func1006->SetParLimits(5,0,0);
   func1006->Draw("Csame");
   
   Double_t _fx1005[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1005[12] = {
   0.09355943,
   0.1076476,
   0.1155604,
   0.1128886,
   0.1204133,
   0.1250249,
   0.1262707,
   0.1317228,
   0.131877,
   0.135852,
   0.1305847,
   0.05459472};
   Double_t _fex1005[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[12] = {
   0.001828,
   0.001962862,
   0.002084497,
   0.002008787,
   0.002074211,
   0.002123329,
   0.002127573,
   0.002169772,
   0.00217208,
   0.002202595,
   0.002209429,
   0.001447549};
   gre = new TGraphErrors(12,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,770,5930);
   Graph_Graph1005->SetMinimum(0.04465643);
   Graph_Graph1005->SetMaximum(0.1465453);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *func1006 = new TF1("func","pol5",1200,5500);
   func1006->SetBit(TF1::kNotDraw);
   func1006->SetFillColor(19);
   func1006->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1006->SetMarkerColor(ci);
   func1006->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   func1006->SetLineColor(ci);
   func1006->SetLineWidth(3);
   func1006->SetLineStyle(9);
   func1006->SetChisquare(26.28399);
   func1006->SetNDF(6);
   func1006->GetXaxis()->SetLabelFont(42);
   func1006->GetXaxis()->SetLabelOffset(0.007);
   func1006->GetXaxis()->SetLabelSize(0.05);
   func1006->GetXaxis()->SetTitleSize(0.06);
   func1006->GetXaxis()->SetTitleOffset(0.9);
   func1006->GetXaxis()->SetTitleFont(42);
   func1006->GetYaxis()->SetLabelFont(42);
   func1006->GetYaxis()->SetLabelOffset(0.007);
   func1006->GetYaxis()->SetLabelSize(0.05);
   func1006->GetYaxis()->SetTitleSize(0.06);
   func1006->GetYaxis()->SetTitleOffset(1.25);
   func1006->GetYaxis()->SetTitleFont(42);
   func1006->SetParameter(0,0.1056242);
   func1006->SetParError(0,0.06218669);
   func1006->SetParLimits(0,0,0);
   func1006->SetParameter(1,-0.000132845);
   func1006->SetParError(1,0.0001203334);
   func1006->SetParLimits(1,0,0);
   func1006->SetParameter(2,1.885462e-07);
   func1006->SetParError(2,8.674415e-08);
   func1006->SetParLimits(2,0,0);
   func1006->SetParameter(3,-9.090905e-11);
   func1006->SetParError(3,2.923039e-11);
   func1006->SetParLimits(3,0,0);
   func1006->SetParameter(4,1.870329e-14);
   func1006->SetParError(4,4.638777e-15);
   func1006->SetParLimits(4,0,0);
   func1006->SetParameter(5,-1.39347e-18);
   func1006->SetParError(5,2.795052e-19);
   func1006->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1006);
   gre->Draw("p");
   
   Double_t _fx1007[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1007[12] = {
   0.01604444,
   0.02249626,
   0.02667871,
   0.02889034,
   0.03059864,
   0.0387453,
   0.04189357,
   0.04968983,
   0.05696104,
   0.05981588,
   0.06205937,
   0.02721959};
   Double_t _fex1007[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[12] = {
   0.0007561879,
   0.0008932735,
   0.0009945527,
   0.001010672,
   0.001041417,
   0.001175308,
   0.001219195,
   0.001326068,
   0.001420278,
   0.001454911,
   0.001512646,
   0.001013428};
   gre = new TGraphErrors(12,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,770,5930);
   Graph_Graph1007->SetMinimum(0.01045988);
   Graph_Graph1007->SetMaximum(0.06840039);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *func1008 = new TF1("func","pol5",1200,5500);
   func1008->SetBit(TF1::kNotDraw);
   func1008->SetFillColor(19);
   func1008->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1008->SetMarkerColor(ci);
   func1008->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   func1008->SetLineColor(ci);
   func1008->SetLineWidth(3);
   func1008->SetChisquare(16.68753);
   func1008->SetNDF(6);
   func1008->GetXaxis()->SetLabelFont(42);
   func1008->GetXaxis()->SetLabelOffset(0.007);
   func1008->GetXaxis()->SetLabelSize(0.05);
   func1008->GetXaxis()->SetTitleSize(0.06);
   func1008->GetXaxis()->SetTitleOffset(0.9);
   func1008->GetXaxis()->SetTitleFont(42);
   func1008->GetYaxis()->SetLabelFont(42);
   func1008->GetYaxis()->SetLabelOffset(0.007);
   func1008->GetYaxis()->SetLabelSize(0.05);
   func1008->GetYaxis()->SetTitleSize(0.06);
   func1008->GetYaxis()->SetTitleOffset(1.25);
   func1008->GetYaxis()->SetTitleFont(42);
   func1008->SetParameter(0,-0.004153848);
   func1008->SetParError(0,0.03273332);
   func1008->SetParLimits(0,0,0);
   func1008->SetParameter(1,-1.318613e-05);
   func1008->SetParError(1,6.487414e-05);
   func1008->SetParLimits(1,0,0);
   func1008->SetParameter(2,5.159234e-08);
   func1008->SetParError(2,4.780412e-08);
   func1008->SetParLimits(2,0,0);
   func1008->SetParameter(3,-2.891935e-11);
   func1008->SetParError(3,1.642197e-11);
   func1008->SetParLimits(3,0,0);
   func1008->SetParameter(4,6.533189e-15);
   func1008->SetParError(4,2.649575e-15);
   func1008->SetParLimits(4,0,0);
   func1008->SetParameter(5,-5.212312e-19);
   func1008->SetParError(5,1.619097e-19);
   func1008->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1008);
   gre->Draw("p");
   
   TF1 *func1009 = new TF1("func","pol5",1200,5500);
   func1009->SetBit(TF1::kNotDraw);
   func1009->SetFillColor(19);
   func1009->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1009->SetMarkerColor(ci);
   func1009->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   func1009->SetLineColor(ci);
   func1009->SetLineWidth(3);
   func1009->SetChisquare(16.68753);
   func1009->SetNDF(6);
   func1009->GetXaxis()->SetLabelFont(42);
   func1009->GetXaxis()->SetLabelOffset(0.007);
   func1009->GetXaxis()->SetLabelSize(0.05);
   func1009->GetXaxis()->SetTitleSize(0.06);
   func1009->GetXaxis()->SetTitleOffset(0.9);
   func1009->GetXaxis()->SetTitleFont(42);
   func1009->GetYaxis()->SetLabelFont(42);
   func1009->GetYaxis()->SetLabelOffset(0.007);
   func1009->GetYaxis()->SetLabelSize(0.05);
   func1009->GetYaxis()->SetTitleSize(0.06);
   func1009->GetYaxis()->SetTitleOffset(1.25);
   func1009->GetYaxis()->SetTitleFont(42);
   func1009->SetParameter(0,-0.004153848);
   func1009->SetParError(0,0.03273332);
   func1009->SetParLimits(0,0,0);
   func1009->SetParameter(1,-1.318613e-05);
   func1009->SetParError(1,6.487414e-05);
   func1009->SetParLimits(1,0,0);
   func1009->SetParameter(2,5.159234e-08);
   func1009->SetParError(2,4.780412e-08);
   func1009->SetParLimits(2,0,0);
   func1009->SetParameter(3,-2.891935e-11);
   func1009->SetParError(3,1.642197e-11);
   func1009->SetParLimits(3,0,0);
   func1009->SetParameter(4,6.533189e-15);
   func1009->SetParError(4,2.649575e-15);
   func1009->SetParLimits(4,0,0);
   func1009->SetParameter(5,-5.212312e-19);
   func1009->SetParError(5,1.619097e-19);
   func1009->SetParLimits(5,0,0);
   func1009->Draw("Csame");
   
   TF1 *func1010 = new TF1("func","pol5",1200,5500);
   func1010->SetBit(TF1::kNotDraw);
   func1010->SetFillColor(19);
   func1010->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1010->SetMarkerColor(ci);
   func1010->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   func1010->SetLineColor(ci);
   func1010->SetLineWidth(3);
   func1010->SetLineStyle(9);
   func1010->SetChisquare(26.28399);
   func1010->SetNDF(6);
   func1010->GetXaxis()->SetLabelFont(42);
   func1010->GetXaxis()->SetLabelOffset(0.007);
   func1010->GetXaxis()->SetLabelSize(0.05);
   func1010->GetXaxis()->SetTitleSize(0.06);
   func1010->GetXaxis()->SetTitleOffset(0.9);
   func1010->GetXaxis()->SetTitleFont(42);
   func1010->GetYaxis()->SetLabelFont(42);
   func1010->GetYaxis()->SetLabelOffset(0.007);
   func1010->GetYaxis()->SetLabelSize(0.05);
   func1010->GetYaxis()->SetTitleSize(0.06);
   func1010->GetYaxis()->SetTitleOffset(1.25);
   func1010->GetYaxis()->SetTitleFont(42);
   func1010->SetParameter(0,0.1056242);
   func1010->SetParError(0,0.06218669);
   func1010->SetParLimits(0,0,0);
   func1010->SetParameter(1,-0.000132845);
   func1010->SetParError(1,0.0001203334);
   func1010->SetParLimits(1,0,0);
   func1010->SetParameter(2,1.885462e-07);
   func1010->SetParError(2,8.674415e-08);
   func1010->SetParLimits(2,0,0);
   func1010->SetParameter(3,-9.090905e-11);
   func1010->SetParError(3,2.923039e-11);
   func1010->SetParLimits(3,0,0);
   func1010->SetParameter(4,1.870329e-14);
   func1010->SetParError(4,4.638777e-15);
   func1010->SetParLimits(4,0,0);
   func1010->SetParameter(5,-1.39347e-18);
   func1010->SetParError(5,2.795052e-19);
   func1010->SetParLimits(5,0,0);
   func1010->Draw("Csame");
   
   Double_t _fx1009[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1009[12] = {
   0.08424799,
   0.1038814,
   0.1090677,
   0.1137482,
   0.1165436,
   0.1202744,
   0.1249655,
   0.1277148,
   0.1326361,
   0.1323121,
   0.130096,
   0.06083939};
   Double_t _fex1009[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1009[12] = {
   0.001193459,
   0.001326165,
   0.001358033,
   0.00138729,
   0.001401262,
   0.001426414,
   0.001454142,
   0.001470742,
   0.001497051,
   0.001493446,
   0.002254991,
   0.001724728};
   gre = new TGraphErrors(12,_fx1009,_fy1009,_fex1009,_fey1009);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,770,5930);
   Graph_Graph1009->SetMinimum(0.05161282);
   Graph_Graph1009->SetMaximum(0.141635);
   Graph_Graph1009->SetDirectory(0);
   Graph_Graph1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1009->SetLineColor(ci);
   Graph_Graph1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1009);
   
   
   TF1 *func1010 = new TF1("func","pol5",1200,5500);
   func1010->SetBit(TF1::kNotDraw);
   func1010->SetFillColor(19);
   func1010->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1010->SetMarkerColor(ci);
   func1010->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   func1010->SetLineColor(ci);
   func1010->SetLineWidth(3);
   func1010->SetLineStyle(9);
   func1010->SetChisquare(46.08841);
   func1010->SetNDF(6);
   func1010->GetXaxis()->SetLabelFont(42);
   func1010->GetXaxis()->SetLabelOffset(0.007);
   func1010->GetXaxis()->SetLabelSize(0.05);
   func1010->GetXaxis()->SetTitleSize(0.06);
   func1010->GetXaxis()->SetTitleOffset(0.9);
   func1010->GetXaxis()->SetTitleFont(42);
   func1010->GetYaxis()->SetLabelFont(42);
   func1010->GetYaxis()->SetLabelOffset(0.007);
   func1010->GetYaxis()->SetLabelSize(0.05);
   func1010->GetYaxis()->SetTitleSize(0.06);
   func1010->GetYaxis()->SetTitleOffset(1.25);
   func1010->GetYaxis()->SetTitleFont(42);
   func1010->SetParameter(0,-0.09642116);
   func1010->SetParError(0,0.04435918);
   func1010->SetParLimits(0,0,0);
   func1010->SetParameter(1,0.0002406918);
   func1010->SetParError(1,8.693817e-05);
   func1010->SetParLimits(1,0,0);
   func1010->SetParameter(2,-7.784993e-08);
   func1010->SetParError(2,6.354583e-08);
   func1010->SetParLimits(2,0,0);
   func1010->SetParameter(3,-7.505336e-13);
   func1010->SetParError(3,2.172912e-11);
   func1010->SetParLimits(3,0,0);
   func1010->SetParameter(4,4.193658e-15);
   func1010->SetParError(4,3.500062e-15);
   func1010->SetParLimits(4,0,0);
   func1010->SetParameter(5,-5.01282e-19);
   func1010->SetParError(5,2.139683e-19);
   func1010->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1010);
   gre->Draw("p");
   
   Double_t _fx1011[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1011[12] = {
   0.01430471,
   0.01964712,
   0.02317321,
   0.027451,
   0.02980119,
   0.03664723,
   0.04171193,
   0.04843895,
   0.05509042,
   0.06055528,
   0.06593692,
   0.03010441};
   Double_t _fex1011[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1011[12] = {
   0.0004919004,
   0.0005742963,
   0.0006228701,
   0.0006786214,
   0.0007069228,
   0.0007842677,
   0.0008365729,
   0.000900957,
   0.0009611897,
   0.001006686,
   0.00156836,
   0.001205255};
   gre = new TGraphErrors(12,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,770,5930);
   Graph_Graph1011->SetMinimum(0.00844356);
   Graph_Graph1011->SetMaximum(0.07287453);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *func1012 = new TF1("func","pol5",1200,5500);
   func1012->SetBit(TF1::kNotDraw);
   func1012->SetFillColor(19);
   func1012->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1012->SetMarkerColor(ci);
   func1012->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   func1012->SetLineColor(ci);
   func1012->SetLineWidth(3);
   func1012->SetChisquare(21.35275);
   func1012->SetNDF(6);
   func1012->GetXaxis()->SetLabelFont(42);
   func1012->GetXaxis()->SetLabelOffset(0.007);
   func1012->GetXaxis()->SetLabelSize(0.05);
   func1012->GetXaxis()->SetTitleSize(0.06);
   func1012->GetXaxis()->SetTitleOffset(0.9);
   func1012->GetXaxis()->SetTitleFont(42);
   func1012->GetYaxis()->SetLabelFont(42);
   func1012->GetYaxis()->SetLabelOffset(0.007);
   func1012->GetYaxis()->SetLabelSize(0.05);
   func1012->GetYaxis()->SetTitleSize(0.06);
   func1012->GetYaxis()->SetTitleOffset(1.25);
   func1012->GetYaxis()->SetTitleFont(42);
   func1012->SetParameter(0,0.03264404);
   func1012->SetParError(0,0.02310715);
   func1012->SetParLimits(0,0,0);
   func1012->SetParameter(1,-9.186718e-05);
   func1012->SetParError(1,4.636255e-05);
   func1012->SetParLimits(1,0,0);
   func1012->SetParameter(2,1.09638e-07);
   func1012->SetParError(2,3.465023e-08);
   func1012->SetParLimits(2,0,0);
   func1012->SetParameter(3,-4.851658e-11);
   func1012->SetParError(3,1.208688e-11);
   func1012->SetParLimits(3,0,0);
   func1012->SetParameter(4,9.609557e-15);
   func1012->SetParError(4,1.981049e-15);
   func1012->SetParLimits(4,0,0);
   func1012->SetParameter(5,-7.022852e-19);
   func1012->SetParError(5,1.229298e-19);
   func1012->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1012);
   gre->Draw("p");
   
   TF1 *func1013 = new TF1("func","pol5",1200,5500);
   func1013->SetBit(TF1::kNotDraw);
   func1013->SetFillColor(19);
   func1013->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1013->SetMarkerColor(ci);
   func1013->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   func1013->SetLineColor(ci);
   func1013->SetLineWidth(3);
   func1013->SetChisquare(21.35275);
   func1013->SetNDF(6);
   func1013->GetXaxis()->SetLabelFont(42);
   func1013->GetXaxis()->SetLabelOffset(0.007);
   func1013->GetXaxis()->SetLabelSize(0.05);
   func1013->GetXaxis()->SetTitleSize(0.06);
   func1013->GetXaxis()->SetTitleOffset(0.9);
   func1013->GetXaxis()->SetTitleFont(42);
   func1013->GetYaxis()->SetLabelFont(42);
   func1013->GetYaxis()->SetLabelOffset(0.007);
   func1013->GetYaxis()->SetLabelSize(0.05);
   func1013->GetYaxis()->SetTitleSize(0.06);
   func1013->GetYaxis()->SetTitleOffset(1.25);
   func1013->GetYaxis()->SetTitleFont(42);
   func1013->SetParameter(0,0.03264404);
   func1013->SetParError(0,0.02310715);
   func1013->SetParLimits(0,0,0);
   func1013->SetParameter(1,-9.186718e-05);
   func1013->SetParError(1,4.636255e-05);
   func1013->SetParLimits(1,0,0);
   func1013->SetParameter(2,1.09638e-07);
   func1013->SetParError(2,3.465023e-08);
   func1013->SetParLimits(2,0,0);
   func1013->SetParameter(3,-4.851658e-11);
   func1013->SetParError(3,1.208688e-11);
   func1013->SetParLimits(3,0,0);
   func1013->SetParameter(4,9.609557e-15);
   func1013->SetParError(4,1.981049e-15);
   func1013->SetParLimits(4,0,0);
   func1013->SetParameter(5,-7.022852e-19);
   func1013->SetParError(5,1.229298e-19);
   func1013->SetParLimits(5,0,0);
   func1013->Draw("Csame");
   
   TF1 *func1014 = new TF1("func","pol5",1200,5500);
   func1014->SetBit(TF1::kNotDraw);
   func1014->SetFillColor(19);
   func1014->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1014->SetMarkerColor(ci);
   func1014->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   func1014->SetLineColor(ci);
   func1014->SetLineWidth(3);
   func1014->SetLineStyle(9);
   func1014->SetChisquare(46.08841);
   func1014->SetNDF(6);
   func1014->GetXaxis()->SetLabelFont(42);
   func1014->GetXaxis()->SetLabelOffset(0.007);
   func1014->GetXaxis()->SetLabelSize(0.05);
   func1014->GetXaxis()->SetTitleSize(0.06);
   func1014->GetXaxis()->SetTitleOffset(0.9);
   func1014->GetXaxis()->SetTitleFont(42);
   func1014->GetYaxis()->SetLabelFont(42);
   func1014->GetYaxis()->SetLabelOffset(0.007);
   func1014->GetYaxis()->SetLabelSize(0.05);
   func1014->GetYaxis()->SetTitleSize(0.06);
   func1014->GetYaxis()->SetTitleOffset(1.25);
   func1014->GetYaxis()->SetTitleFont(42);
   func1014->SetParameter(0,-0.09642116);
   func1014->SetParError(0,0.04435918);
   func1014->SetParLimits(0,0,0);
   func1014->SetParameter(1,0.0002406918);
   func1014->SetParError(1,8.693817e-05);
   func1014->SetParLimits(1,0,0);
   func1014->SetParameter(2,-7.784993e-08);
   func1014->SetParError(2,6.354583e-08);
   func1014->SetParLimits(2,0,0);
   func1014->SetParameter(3,-7.505336e-13);
   func1014->SetParError(3,2.172912e-11);
   func1014->SetParLimits(3,0,0);
   func1014->SetParameter(4,4.193658e-15);
   func1014->SetParError(4,3.500062e-15);
   func1014->SetParLimits(4,0,0);
   func1014->SetParameter(5,-5.01282e-19);
   func1014->SetParError(5,2.139683e-19);
   func1014->SetParLimits(5,0,0);
   func1014->Draw("Csame");
   
   Double_t _fx1013[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1013[12] = {
   0.08612766,
   0.1062455,
   0.1179654,
   0.1229482,
   0.1311194,
   0.1342969,
   0.1403694,
   0.1453032,
   0.1505849,
   0.1547354,
   0.1535872,
   0.07281976};
   Double_t _fex1013[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1013[12] = {
   0.001239856,
   0.001380522,
   0.001451787,
   0.001481381,
   0.001530627,
   0.001546643,
   0.001583143,
   0.001608947,
   0.00163827,
   0.001678494,
   0.001703718,
   0.001180074};
   gre = new TGraphErrors(12,_fx1013,_fy1013,_fex1013,_fey1013);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineStyle(9);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,770,5930);
   Graph_Graph1013->SetMinimum(0.06316226);
   Graph_Graph1013->SetMaximum(0.1648913);
   Graph_Graph1013->SetDirectory(0);
   Graph_Graph1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1013->SetLineColor(ci);
   Graph_Graph1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1013);
   
   
   TF1 *func1014 = new TF1("func","pol5",1200,5500);
   func1014->SetBit(TF1::kNotDraw);
   func1014->SetFillColor(19);
   func1014->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   func1014->SetMarkerColor(ci);
   func1014->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   func1014->SetLineColor(ci);
   func1014->SetLineWidth(3);
   func1014->SetLineStyle(9);
   func1014->SetChisquare(44.24391);
   func1014->SetNDF(6);
   func1014->GetXaxis()->SetLabelFont(42);
   func1014->GetXaxis()->SetLabelOffset(0.007);
   func1014->GetXaxis()->SetLabelSize(0.05);
   func1014->GetXaxis()->SetTitleSize(0.06);
   func1014->GetXaxis()->SetTitleOffset(0.9);
   func1014->GetXaxis()->SetTitleFont(42);
   func1014->GetYaxis()->SetLabelFont(42);
   func1014->GetYaxis()->SetLabelOffset(0.007);
   func1014->GetYaxis()->SetLabelSize(0.05);
   func1014->GetYaxis()->SetTitleSize(0.06);
   func1014->GetYaxis()->SetTitleOffset(1.25);
   func1014->GetYaxis()->SetTitleFont(42);
   func1014->SetParameter(0,-0.04623922);
   func1014->SetParError(0,0.04488226);
   func1014->SetParLimits(0,0,0);
   func1014->SetParameter(1,9.44634e-05);
   func1014->SetParError(1,8.73541e-05);
   func1014->SetParLimits(1,0,0);
   func1014->SetParameter(2,6.69017e-08);
   func1014->SetParError(2,6.330028e-08);
   func1014->SetParLimits(2,0,0);
   func1014->SetParameter(3,-6.013793e-11);
   func1014->SetParError(3,2.14291e-11);
   func1014->SetParLimits(3,0,0);
   func1014->SetParameter(4,1.511954e-14);
   func1014->SetParError(4,3.414567e-15);
   func1014->SetParLimits(4,0,0);
   func1014->SetParameter(5,-1.242534e-18);
   func1014->SetParError(5,2.064781e-19);
   func1014->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1014);
   gre->Draw("p");
   
   Double_t _fx1015[12] = {
   1200,
   1400,
   1600,
   1800,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500};
   Double_t _fy1015[12] = {
   0.01131502,
   0.01719324,
   0.02192552,
   0.02543422,
   0.03006666,
   0.03641652,
   0.03959859,
   0.04613271,
   0.05178844,
   0.05878824,
   0.06518115,
   0.03348917};
   Double_t _fex1015[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1015[12] = {
   0.0004414822,
   0.0005457202,
   0.0006129205,
   0.0006614945,
   0.0007177917,
   0.0007895805,
   0.0008241407,
   0.0008894621,
   0.0009423176,
   0.001014456,
   0.001086868,
   0.0007801153};
   gre = new TGraphErrors(12,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,770,5930);
   Graph_Graph1015->SetMinimum(0.005334091);
   Graph_Graph1015->SetMaximum(0.07180747);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1015->SetLineColor(ci);
   Graph_Graph1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1015);
   
   
   TF1 *func1016 = new TF1("func","pol5",1200,5500);
   func1016->SetBit(TF1::kNotDraw);
   func1016->SetFillColor(19);
   func1016->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   func1016->SetMarkerColor(ci);
   func1016->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   func1016->SetLineColor(ci);
   func1016->SetLineWidth(3);
   func1016->SetChisquare(21.40886);
   func1016->SetNDF(6);
   func1016->GetXaxis()->SetLabelFont(42);
   func1016->GetXaxis()->SetLabelOffset(0.007);
   func1016->GetXaxis()->SetLabelSize(0.05);
   func1016->GetXaxis()->SetTitleSize(0.06);
   func1016->GetXaxis()->SetTitleOffset(0.9);
   func1016->GetXaxis()->SetTitleFont(42);
   func1016->GetYaxis()->SetLabelFont(42);
   func1016->GetYaxis()->SetLabelOffset(0.007);
   func1016->GetYaxis()->SetLabelSize(0.05);
   func1016->GetYaxis()->SetTitleSize(0.06);
   func1016->GetYaxis()->SetTitleOffset(1.25);
   func1016->GetYaxis()->SetTitleFont(42);
   func1016->SetParameter(0,0.04889653);
   func1016->SetParError(0,0.02112391);
   func1016->SetParLimits(0,0,0);
   func1016->SetParameter(1,-0.0001438804);
   func1016->SetParError(1,4.222422e-05);
   func1016->SetParLimits(1,0,0);
   func1016->SetParameter(2,1.582678e-07);
   func1016->SetParError(2,3.136213e-08);
   func1016->SetParLimits(2,0,0);
   func1016->SetParameter(3,-6.784152e-11);
   func1016->SetParError(3,1.085012e-11);
   func1016->SetParLimits(3,0,0);
   func1016->SetParameter(4,1.3004e-14);
   func1016->SetParError(4,1.761658e-15);
   func1016->SetParLimits(4,0,0);
   func1016->SetParameter(5,-9.186998e-19);
   func1016->SetParError(5,1.082594e-19);
   func1016->SetParLimits(5,0,0);
   gre->GetListOfFunctions()->Add(func1016);
   gre->Draw("p");
   
   TF1 *func1017 = new TF1("func","pol5",1200,5500);
   func1017->SetBit(TF1::kNotDraw);
   func1017->SetFillColor(19);
   func1017->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   func1017->SetMarkerColor(ci);
   func1017->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   func1017->SetLineColor(ci);
   func1017->SetLineWidth(3);
   func1017->SetChisquare(21.40886);
   func1017->SetNDF(6);
   func1017->GetXaxis()->SetLabelFont(42);
   func1017->GetXaxis()->SetLabelOffset(0.007);
   func1017->GetXaxis()->SetLabelSize(0.05);
   func1017->GetXaxis()->SetTitleSize(0.06);
   func1017->GetXaxis()->SetTitleOffset(0.9);
   func1017->GetXaxis()->SetTitleFont(42);
   func1017->GetYaxis()->SetLabelFont(42);
   func1017->GetYaxis()->SetLabelOffset(0.007);
   func1017->GetYaxis()->SetLabelSize(0.05);
   func1017->GetYaxis()->SetTitleSize(0.06);
   func1017->GetYaxis()->SetTitleOffset(1.25);
   func1017->GetYaxis()->SetTitleFont(42);
   func1017->SetParameter(0,0.04889653);
   func1017->SetParError(0,0.02112391);
   func1017->SetParLimits(0,0,0);
   func1017->SetParameter(1,-0.0001438804);
   func1017->SetParError(1,4.222422e-05);
   func1017->SetParLimits(1,0,0);
   func1017->SetParameter(2,1.582678e-07);
   func1017->SetParError(2,3.136213e-08);
   func1017->SetParLimits(2,0,0);
   func1017->SetParameter(3,-6.784152e-11);
   func1017->SetParError(3,1.085012e-11);
   func1017->SetParLimits(3,0,0);
   func1017->SetParameter(4,1.3004e-14);
   func1017->SetParError(4,1.761658e-15);
   func1017->SetParLimits(4,0,0);
   func1017->SetParameter(5,-9.186998e-19);
   func1017->SetParError(5,1.082594e-19);
   func1017->SetParLimits(5,0,0);
   func1017->Draw("Csame");
   
   TF1 *func1018 = new TF1("func","pol5",1200,5500);
   func1018->SetBit(TF1::kNotDraw);
   func1018->SetFillColor(19);
   func1018->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   func1018->SetMarkerColor(ci);
   func1018->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   func1018->SetLineColor(ci);
   func1018->SetLineWidth(3);
   func1018->SetLineStyle(9);
   func1018->SetChisquare(44.24391);
   func1018->SetNDF(6);
   func1018->GetXaxis()->SetLabelFont(42);
   func1018->GetXaxis()->SetLabelOffset(0.007);
   func1018->GetXaxis()->SetLabelSize(0.05);
   func1018->GetXaxis()->SetTitleSize(0.06);
   func1018->GetXaxis()->SetTitleOffset(0.9);
   func1018->GetXaxis()->SetTitleFont(42);
   func1018->GetYaxis()->SetLabelFont(42);
   func1018->GetYaxis()->SetLabelOffset(0.007);
   func1018->GetYaxis()->SetLabelSize(0.05);
   func1018->GetYaxis()->SetTitleSize(0.06);
   func1018->GetYaxis()->SetTitleOffset(1.25);
   func1018->GetYaxis()->SetTitleFont(42);
   func1018->SetParameter(0,-0.04623922);
   func1018->SetParError(0,0.04488226);
   func1018->SetParLimits(0,0,0);
   func1018->SetParameter(1,9.44634e-05);
   func1018->SetParError(1,8.73541e-05);
   func1018->SetParLimits(1,0,0);
   func1018->SetParameter(2,6.69017e-08);
   func1018->SetParError(2,6.330028e-08);
   func1018->SetParLimits(2,0,0);
   func1018->SetParameter(3,-6.013793e-11);
   func1018->SetParError(3,2.14291e-11);
   func1018->SetParLimits(3,0,0);
   func1018->SetParameter(4,1.511954e-14);
   func1018->SetParError(4,3.414567e-15);
   func1018->SetParLimits(4,0,0);
   func1018->SetParameter(5,-1.242534e-18);
   func1018->SetParError(5,2.064781e-19);
   func1018->SetParLimits(5,0,0);
   func1018->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   leg = new TLegend(0.7788945,0.1783217,0.9974874,0.2482517,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("func","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("func","HPLP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.936,"(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.032);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.89284,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.83524,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03648);
   tex->SetLineWidth(2);
   tex->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
