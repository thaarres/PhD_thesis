void signalEff()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:17:26 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(501.1429,-0.0556701,5708.286,0.3309278);
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
   
   TF1 *func1 = new TF1("func","pol7",1126,5500);
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
   func1->SetChisquare(3.500192);
   func1->SetNDF(4);
   func1->GetXaxis()->SetTitle("M_{VV} (GeV)");
   func1->GetXaxis()->SetRange(1,100);
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
   func1->SetParameter(0,-0.4407346);
   func1->SetParError(0,0.5898953);
   func1->SetParLimits(0,0,0);
   func1->SetParameter(1,0.0009764654);
   func1->SetParError(1,0.001640975);
   func1->SetParLimits(1,0,0);
   func1->SetParameter(2,-6.408403e-07);
   func1->SetParError(2,1.866166e-06);
   func1->SetParLimits(2,0,0);
   func1->SetParameter(3,1.809907e-10);
   func1->SetParError(3,1.126608e-09);
   func1->SetParLimits(3,0,0);
   func1->SetParameter(4,-7.918144e-15);
   func1->SetParError(4,3.908327e-13);
   func1->SetParLimits(4,0,0);
   func1->SetParameter(5,-7.491146e-18);
   func1->SetParError(5,7.811822e-17);
   func1->SetParLimits(5,0,0);
   func1->SetParameter(6,1.678378e-21);
   func1->SetParError(6,8.353173e-21);
   func1->SetParLimits(6,0,0);
   func1->SetParameter(7,-1.122635e-25);
   func1->SetParError(7,3.696665e-25);
   func1->SetParLimits(7,0,0);
   func1->Draw("C");
   
   Double_t _fx1001[13] = {
   1000,
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
   Double_t _fy1001[13] = {
   0.01050999,
   0.1043359,
   0.1167009,
   0.11134,
   0.1092269,
   0.103684,
   0.09467687,
   0.08723673,
   0.08323933,
   0.07032988,
   0.06795778,
   0.06705961,
   0.03106031};
   Double_t _fex1001[13] = {
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
   0,
   0};
   Double_t _fey1001[13] = {
   0.000642114,
   0.002001763,
   0.002138323,
   0.002081776,
   0.002098,
   0.002054017,
   0.002006275,
   0.001971057,
   0.002138255,
   0.002045135,
   0.003116099,
   0.004348751,
   0.002636371};
   TGraphErrors *gre = new TGraphErrors(13,_fx1001,_fy1001,_fex1001,_fey1001);
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
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,550,5950);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.1297364);
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
   
   
   TF1 *func1002 = new TF1("func","pol7",1126,5500);
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
   func1002->SetChisquare(4.7877);
   func1002->SetNDF(4);
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
   func1002->SetParameter(0,-1.039647);
   func1002->SetParError(0,0.5748494);
   func1002->SetParLimits(0,0,0);
   func1002->SetParameter(1,0.002718276);
   func1002->SetParError(1,0.001582707);
   func1002->SetParLimits(1,0,0);
   func1002->SetParameter(2,-2.544533e-06);
   func1002->SetParError(2,1.781209e-06);
   func1002->SetParLimits(2,0,0);
   func1002->SetParameter(3,1.224051e-09);
   func1002->SetParError(3,1.064516e-09);
   func1002->SetParLimits(3,0,0);
   func1002->SetParameter(4,-3.264282e-13);
   func1002->SetParError(4,3.658549e-13);
   func1002->SetParLimits(4,0,0);
   func1002->SetParameter(5,4.74884e-17);
   func1002->SetParError(5,7.251677e-17);
   func1002->SetParLimits(5,0,0);
   func1002->SetParameter(6,-3.356556e-21);
   func1002->SetParError(6,7.697887e-21);
   func1002->SetParLimits(6,0,0);
   func1002->SetParameter(7,7.916862e-26);
   func1002->SetParError(7,3.38544e-25);
   func1002->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1002);
   gre->Draw("p");
   
   Double_t _fx1003[13] = {
   1000,
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
   Double_t _fy1003[13] = {
   0.003388517,
   0.09027238,
   0.1082732,
   0.1176884,
   0.1198423,
   0.1236893,
   0.1255098,
   0.1217681,
   0.1286227,
   0.1324921,
   0.1396411,
   0.1407283,
   0.07642423};
   Double_t _fex1003[13] = {
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
   0,
   0};
   Double_t _fey1003[13] = {
   0.0003324375,
   0.001765894,
   0.00193468,
   0.00202331,
   0.002045462,
   0.002117724,
   0.002199921,
   0.002240311,
   0.002680998,
   0.00281882,
   0.003853343,
   0.004801033,
   0.004541698};
   gre = new TGraphErrors(13,_fx1003,_fy1003,_fex1003,_fey1003);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,550,5950);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.1597766);
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
   
   
   TF1 *func1004 = new TF1("func","pol7",1126,5500);
   func1004->SetBit(TF1::kNotDraw);
   func1004->SetFillColor(19);
   func1004->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1004->SetMarkerColor(ci);
   func1004->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1004->SetLineColor(ci);
   func1004->SetLineWidth(3);
   func1004->SetChisquare(3.500192);
   func1004->SetNDF(4);
   func1004->GetXaxis()->SetTitle("M_{VV} (GeV)");
   func1004->GetXaxis()->SetRange(1,100);
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
   func1004->SetParameter(0,-0.4407346);
   func1004->SetParError(0,0.5898953);
   func1004->SetParLimits(0,0,0);
   func1004->SetParameter(1,0.0009764654);
   func1004->SetParError(1,0.001640975);
   func1004->SetParLimits(1,0,0);
   func1004->SetParameter(2,-6.408403e-07);
   func1004->SetParError(2,1.866166e-06);
   func1004->SetParLimits(2,0,0);
   func1004->SetParameter(3,1.809907e-10);
   func1004->SetParError(3,1.126608e-09);
   func1004->SetParLimits(3,0,0);
   func1004->SetParameter(4,-7.918144e-15);
   func1004->SetParError(4,3.908327e-13);
   func1004->SetParLimits(4,0,0);
   func1004->SetParameter(5,-7.491146e-18);
   func1004->SetParError(5,7.811822e-17);
   func1004->SetParLimits(5,0,0);
   func1004->SetParameter(6,1.678378e-21);
   func1004->SetParError(6,8.353173e-21);
   func1004->SetParLimits(6,0,0);
   func1004->SetParameter(7,-1.122635e-25);
   func1004->SetParError(7,3.696665e-25);
   func1004->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1004);
   gre->Draw("p");
   
   TF1 *func1005 = new TF1("func","pol7",1126,5500);
   func1005->SetBit(TF1::kNotDraw);
   func1005->SetFillColor(19);
   func1005->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   func1005->SetMarkerColor(ci);
   func1005->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   func1005->SetLineColor(ci);
   func1005->SetLineWidth(3);
   func1005->SetChisquare(3.500192);
   func1005->SetNDF(4);
   func1005->GetXaxis()->SetTitle("M_{VV} (GeV)");
   func1005->GetXaxis()->SetRange(1,100);
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
   func1005->SetParameter(0,-0.4407346);
   func1005->SetParError(0,0.5898953);
   func1005->SetParLimits(0,0,0);
   func1005->SetParameter(1,0.0009764654);
   func1005->SetParError(1,0.001640975);
   func1005->SetParLimits(1,0,0);
   func1005->SetParameter(2,-6.408403e-07);
   func1005->SetParError(2,1.866166e-06);
   func1005->SetParLimits(2,0,0);
   func1005->SetParameter(3,1.809907e-10);
   func1005->SetParError(3,1.126608e-09);
   func1005->SetParLimits(3,0,0);
   func1005->SetParameter(4,-7.918144e-15);
   func1005->SetParError(4,3.908327e-13);
   func1005->SetParLimits(4,0,0);
   func1005->SetParameter(5,-7.491146e-18);
   func1005->SetParError(5,7.811822e-17);
   func1005->SetParLimits(5,0,0);
   func1005->SetParameter(6,1.678378e-21);
   func1005->SetParError(6,8.353173e-21);
   func1005->SetParLimits(6,0,0);
   func1005->SetParameter(7,-1.122635e-25);
   func1005->SetParError(7,3.696665e-25);
   func1005->SetParLimits(7,0,0);
   func1005->Draw("Csame");
   
   TF1 *func1006 = new TF1("func","pol7",1126,5500);
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
   func1006->SetChisquare(4.7877);
   func1006->SetNDF(4);
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
   func1006->SetParameter(0,-1.039647);
   func1006->SetParError(0,0.5748494);
   func1006->SetParLimits(0,0,0);
   func1006->SetParameter(1,0.002718276);
   func1006->SetParError(1,0.001582707);
   func1006->SetParLimits(1,0,0);
   func1006->SetParameter(2,-2.544533e-06);
   func1006->SetParError(2,1.781209e-06);
   func1006->SetParLimits(2,0,0);
   func1006->SetParameter(3,1.224051e-09);
   func1006->SetParError(3,1.064516e-09);
   func1006->SetParLimits(3,0,0);
   func1006->SetParameter(4,-3.264282e-13);
   func1006->SetParError(4,3.658549e-13);
   func1006->SetParLimits(4,0,0);
   func1006->SetParameter(5,4.74884e-17);
   func1006->SetParError(5,7.251677e-17);
   func1006->SetParLimits(5,0,0);
   func1006->SetParameter(6,-3.356556e-21);
   func1006->SetParError(6,7.697887e-21);
   func1006->SetParLimits(6,0,0);
   func1006->SetParameter(7,7.916862e-26);
   func1006->SetParError(7,3.38544e-25);
   func1006->SetParLimits(7,0,0);
   func1006->Draw("Csame");
   
   Double_t _fx1005[13] = {
   1000,
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
   Double_t _fy1005[13] = {
   0.02049718,
   0.1180582,
   0.1267858,
   0.1224113,
   0.1193337,
   0.1161724,
   0.109681,
   0.1021531,
   0.09534033,
   0.08971814,
   0.08613554,
   0.0808481,
   0.04428845};
   Double_t _fex1005[13] = {
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
   0,
   0};
   Double_t _fey1005[13] = {
   0.0003117397,
   0.0006897112,
   0.0007484343,
   0.0007587301,
   0.0006995717,
   0.0006844231,
   0.0006820083,
   0.0006561821,
   0.0006402305,
   0.0006372301,
   0.0006299593,
   0.00195345,
   0.00144159};
   gre = new TGraphErrors(13,_fx1005,_fy1005,_fex1005,_fey1005);
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
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,550,5950);
   Graph_Graph1005->SetMinimum(0.00945056);
   Graph_Graph1005->SetMaximum(0.1382691);
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
   
   
   TF1 *func1006 = new TF1("func","pol7",1126,5500);
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
   func1006->SetChisquare(16.77452);
   func1006->SetNDF(4);
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
   func1006->SetParameter(0,-0.9750153);
   func1006->SetParError(0,0.191057);
   func1006->SetParLimits(0,0,0);
   func1006->SetParameter(1,0.002788217);
   func1006->SetParError(1,0.0005241661);
   func1006->SetParLimits(1,0,0);
   func1006->SetParameter(2,-2.869678e-06);
   func1006->SetParError(2,5.880701e-07);
   func1006->SetParLimits(2,0,0);
   func1006->SetParameter(3,1.560967e-09);
   func1006->SetParError(3,3.506675e-10);
   func1006->SetParLimits(3,0,0);
   func1006->SetParameter(4,-4.879062e-13);
   func1006->SetParError(4,1.203986e-13);
   func1006->SetParLimits(4,0,0);
   func1006->SetParameter(5,8.774676e-17);
   func1006->SetParError(5,2.38765e-17);
   func1006->SetParLimits(5,0,0);
   func1006->SetParameter(6,-8.413719e-21);
   func1006->SetParError(6,2.539912e-21);
   func1006->SetParLimits(6,0,0);
   func1006->SetParameter(7,3.319176e-25);
   func1006->SetParError(7,1.121082e-25);
   func1006->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1006);
   gre->Draw("p");
   
   Double_t _fx1007[13] = {
   1000,
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
   Double_t _fy1007[13] = {
   0.005928727,
   0.09555298,
   0.1163046,
   0.1194021,
   0.1225722,
   0.1232206,
   0.1245329,
   0.1259083,
   0.1279047,
   0.1327731,
   0.1366869,
   0.1355705,
   0.07049166};
   Double_t _fex1007[13] = {
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
   0,
   0};
   Double_t _fey1007[13] = {
   0.0001583009,
   0.0005891739,
   0.0006745266,
   0.0007020613,
   0.0006666219,
   0.0006619903,
   0.0006877585,
   0.0006718412,
   0.0006966913,
   0.0007315157,
   0.0007342966,
   0.00249878,
   0.001648872};
   gre = new TGraphErrors(13,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,550,5950);
   Graph_Graph1007->SetMinimum(0);
   Graph_Graph1007->SetMaximum(0.1512991);
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
   
   
   TF1 *func1008 = new TF1("func","pol7",1126,5500);
   func1008->SetBit(TF1::kNotDraw);
   func1008->SetFillColor(19);
   func1008->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1008->SetMarkerColor(ci);
   func1008->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   func1008->SetLineColor(ci);
   func1008->SetLineWidth(3);
   func1008->SetChisquare(25.19433);
   func1008->SetNDF(4);
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
   func1008->SetParameter(0,-1.290679);
   func1008->SetParError(0,0.1904383);
   func1008->SetParLimits(0,0,0);
   func1008->SetParameter(1,0.003308212);
   func1008->SetParError(1,0.0005284462);
   func1008->SetParLimits(1,0,0);
   func1008->SetParameter(2,-3.202101e-06);
   func1008->SetParError(2,5.999908e-07);
   func1008->SetParLimits(2,0,0);
   func1008->SetParameter(3,1.657435e-09);
   func1008->SetParError(3,3.621506e-10);
   func1008->SetParLimits(3,0,0);
   func1008->SetParameter(4,-4.944337e-13);
   func1008->SetParError(4,1.258452e-13);
   func1008->SetParLimits(4,0,0);
   func1008->SetParameter(5,8.482326e-17);
   func1008->SetParError(5,2.524805e-17);
   func1008->SetParLimits(5,0,0);
   func1008->SetParameter(6,-7.717744e-21);
   func1008->SetParError(6,2.715504e-21);
   func1008->SetParLimits(6,0,0);
   func1008->SetParameter(7,2.853432e-25);
   func1008->SetParError(7,1.210914e-25);
   func1008->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1008);
   gre->Draw("p");
   
   TF1 *func1009 = new TF1("func","pol7",1126,5500);
   func1009->SetBit(TF1::kNotDraw);
   func1009->SetFillColor(19);
   func1009->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   func1009->SetMarkerColor(ci);
   func1009->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   func1009->SetLineColor(ci);
   func1009->SetLineWidth(3);
   func1009->SetChisquare(25.19433);
   func1009->SetNDF(4);
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
   func1009->SetParameter(0,-1.290679);
   func1009->SetParError(0,0.1904383);
   func1009->SetParLimits(0,0,0);
   func1009->SetParameter(1,0.003308212);
   func1009->SetParError(1,0.0005284462);
   func1009->SetParLimits(1,0,0);
   func1009->SetParameter(2,-3.202101e-06);
   func1009->SetParError(2,5.999908e-07);
   func1009->SetParLimits(2,0,0);
   func1009->SetParameter(3,1.657435e-09);
   func1009->SetParError(3,3.621506e-10);
   func1009->SetParLimits(3,0,0);
   func1009->SetParameter(4,-4.944337e-13);
   func1009->SetParError(4,1.258452e-13);
   func1009->SetParLimits(4,0,0);
   func1009->SetParameter(5,8.482326e-17);
   func1009->SetParError(5,2.524805e-17);
   func1009->SetParLimits(5,0,0);
   func1009->SetParameter(6,-7.717744e-21);
   func1009->SetParError(6,2.715504e-21);
   func1009->SetParLimits(6,0,0);
   func1009->SetParameter(7,2.853432e-25);
   func1009->SetParError(7,1.210914e-25);
   func1009->SetParLimits(7,0,0);
   func1009->Draw("Csame");
   
   TF1 *func1010 = new TF1("func","pol7",1126,5500);
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
   func1010->SetChisquare(16.77452);
   func1010->SetNDF(4);
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
   func1010->SetParameter(0,-0.9750153);
   func1010->SetParError(0,0.191057);
   func1010->SetParLimits(0,0,0);
   func1010->SetParameter(1,0.002788217);
   func1010->SetParError(1,0.0005241661);
   func1010->SetParLimits(1,0,0);
   func1010->SetParameter(2,-2.869678e-06);
   func1010->SetParError(2,5.880701e-07);
   func1010->SetParLimits(2,0,0);
   func1010->SetParameter(3,1.560967e-09);
   func1010->SetParError(3,3.506675e-10);
   func1010->SetParLimits(3,0,0);
   func1010->SetParameter(4,-4.879062e-13);
   func1010->SetParError(4,1.203986e-13);
   func1010->SetParLimits(4,0,0);
   func1010->SetParameter(5,8.774676e-17);
   func1010->SetParError(5,2.38765e-17);
   func1010->SetParLimits(5,0,0);
   func1010->SetParameter(6,-8.413719e-21);
   func1010->SetParError(6,2.539912e-21);
   func1010->SetParLimits(6,0,0);
   func1010->SetParameter(7,3.319176e-25);
   func1010->SetParError(7,1.121082e-25);
   func1010->SetParLimits(7,0,0);
   func1010->Draw("Csame");
   
   Double_t _fx1009[13] = {
   1000,
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
   Double_t _fy1009[13] = {
   0.008914773,
   0.1033852,
   0.1222091,
   0.1164488,
   0.1151587,
   0.108032,
   0.1003688,
   0.09369344,
   0.08608115,
   0.07756983,
   0.06965861,
   0.06823968,
   0.03577119};
   Double_t _fex1009[13] = {
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
   0,
   0};
   Double_t _fey1009[13] = {
   0.0004079846,
   0.00144379,
   0.001495065,
   0.001490305,
   0.00150208,
   0.00148332,
   0.001522831,
   0.001417477,
   0.001439417,
   0.001503398,
   0.001511012,
   0.001893859,
   0.00169522};
   gre = new TGraphErrors(13,_fx1009,_fy1009,_fex1009,_fey1009);
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
   
   TH1F *Graph_Graph1009 = new TH1F("Graph_Graph1009","",100,550,5950);
   Graph_Graph1009->SetMinimum(0);
   Graph_Graph1009->SetMaximum(0.135224);
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
   
   
   TF1 *func1010 = new TF1("func","pol7",1126,5500);
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
   func1010->SetChisquare(12.69871);
   func1010->SetNDF(4);
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
   func1010->SetParameter(0,-1.706594);
   func1010->SetParError(0,0.381051);
   func1010->SetParLimits(0,0,0);
   func1010->SetParameter(1,0.004429708);
   func1010->SetParError(1,0.001039499);
   func1010->SetParLimits(1,0,0);
   func1010->SetParameter(2,-4.342168e-06);
   func1010->SetParError(2,1.157817e-06);
   func1010->SetParLimits(2,0,0);
   func1010->SetParameter(3,2.235726e-09);
   func1010->SetParError(3,6.841513e-10);
   func1010->SetParLimits(3,0,0);
   func1010->SetParameter(4,-6.5671e-13);
   func1010->SetParError(4,2.323176e-13);
   func1010->SetParLimits(4,0,0);
   func1010->SetParameter(5,1.102116e-16);
   func1010->SetParError(5,4.548148e-17);
   func1010->SetParLimits(5,0,0);
   func1010->SetParameter(6,-9.789219e-21);
   func1010->SetParError(6,4.768609e-21);
   func1010->SetParLimits(6,0,0);
   func1010->SetParameter(7,3.546011e-25);
   func1010->SetParError(7,2.072008e-25);
   func1010->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1010);
   gre->Draw("p");
   
   Double_t _fx1011[13] = {
   1000,
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
   Double_t _fy1011[13] = {
   0.003282991,
   0.09068296,
   0.111348,
   0.1204894,
   0.1264272,
   0.1263051,
   0.1313548,
   0.1317312,
   0.1333369,
   0.1383904,
   0.1420721,
   0.1427997,
   0.07540323};
   Double_t _fex1011[13] = {
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
   0,
   0};
   Double_t _fey1011[13] = {
   0.0002350926,
   0.001275262,
   0.001353193,
   0.001434688,
   0.001493596,
   0.001510781,
   0.001631639,
   0.001608341,
   0.001772062,
   0.002057668,
   0.0064879,
   0.002634878,
   0.002550848};
   gre = new TGraphErrors(13,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,550,5950);
   Graph_Graph1011->SetMinimum(0);
   Graph_Graph1011->SetMaximum(0.1631112);
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
   
   
   TF1 *func1012 = new TF1("func","pol7",1126,5500);
   func1012->SetBit(TF1::kNotDraw);
   func1012->SetFillColor(19);
   func1012->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1012->SetMarkerColor(ci);
   func1012->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   func1012->SetLineColor(ci);
   func1012->SetLineWidth(3);
   func1012->SetChisquare(2.241168);
   func1012->SetNDF(4);
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
   func1012->SetParameter(0,-1.103513);
   func1012->SetParError(0,0.4642448);
   func1012->SetParLimits(0,0,0);
   func1012->SetParameter(1,0.002772901);
   func1012->SetParError(1,0.00130369);
   func1012->SetParLimits(1,0,0);
   func1012->SetParameter(2,-2.626784e-06);
   func1012->SetParError(2,1.497284e-06);
   func1012->SetParLimits(2,0,0);
   func1012->SetParameter(3,1.345664e-09);
   func1012->SetParError(3,9.127127e-10);
   func1012->SetParLimits(3,0,0);
   func1012->SetParameter(4,-3.992449e-13);
   func1012->SetParError(4,3.194745e-13);
   func1012->SetParLimits(4,0,0);
   func1012->SetParameter(5,6.806164e-17);
   func1012->SetParError(5,6.435071e-17);
   func1012->SetParLimits(5,0,0);
   func1012->SetParameter(6,-6.112633e-21);
   func1012->SetParError(6,6.923597e-21);
   func1012->SetParLimits(6,0,0);
   func1012->SetParameter(7,2.200112e-25);
   func1012->SetParError(7,3.077715e-25);
   func1012->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1012);
   gre->Draw("p");
   
   TF1 *func1013 = new TF1("func","pol7",1126,5500);
   func1013->SetBit(TF1::kNotDraw);
   func1013->SetFillColor(19);
   func1013->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   func1013->SetMarkerColor(ci);
   func1013->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   func1013->SetLineColor(ci);
   func1013->SetLineWidth(3);
   func1013->SetChisquare(2.241168);
   func1013->SetNDF(4);
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
   func1013->SetParameter(0,-1.103513);
   func1013->SetParError(0,0.4642448);
   func1013->SetParLimits(0,0,0);
   func1013->SetParameter(1,0.002772901);
   func1013->SetParError(1,0.00130369);
   func1013->SetParLimits(1,0,0);
   func1013->SetParameter(2,-2.626784e-06);
   func1013->SetParError(2,1.497284e-06);
   func1013->SetParLimits(2,0,0);
   func1013->SetParameter(3,1.345664e-09);
   func1013->SetParError(3,9.127127e-10);
   func1013->SetParLimits(3,0,0);
   func1013->SetParameter(4,-3.992449e-13);
   func1013->SetParError(4,3.194745e-13);
   func1013->SetParLimits(4,0,0);
   func1013->SetParameter(5,6.806164e-17);
   func1013->SetParError(5,6.435071e-17);
   func1013->SetParLimits(5,0,0);
   func1013->SetParameter(6,-6.112633e-21);
   func1013->SetParError(6,6.923597e-21);
   func1013->SetParLimits(6,0,0);
   func1013->SetParameter(7,2.200112e-25);
   func1013->SetParError(7,3.077715e-25);
   func1013->SetParLimits(7,0,0);
   func1013->Draw("Csame");
   
   TF1 *func1014 = new TF1("func","pol7",1126,5500);
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
   func1014->SetChisquare(12.69871);
   func1014->SetNDF(4);
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
   func1014->SetParameter(0,-1.706594);
   func1014->SetParError(0,0.381051);
   func1014->SetParLimits(0,0,0);
   func1014->SetParameter(1,0.004429708);
   func1014->SetParError(1,0.001039499);
   func1014->SetParLimits(1,0,0);
   func1014->SetParameter(2,-4.342168e-06);
   func1014->SetParError(2,1.157817e-06);
   func1014->SetParLimits(2,0,0);
   func1014->SetParameter(3,2.235726e-09);
   func1014->SetParError(3,6.841513e-10);
   func1014->SetParLimits(3,0,0);
   func1014->SetParameter(4,-6.5671e-13);
   func1014->SetParError(4,2.323176e-13);
   func1014->SetParLimits(4,0,0);
   func1014->SetParameter(5,1.102116e-16);
   func1014->SetParError(5,4.548148e-17);
   func1014->SetParLimits(5,0,0);
   func1014->SetParameter(6,-9.789219e-21);
   func1014->SetParError(6,4.768609e-21);
   func1014->SetParLimits(6,0,0);
   func1014->SetParameter(7,3.546011e-25);
   func1014->SetParError(7,2.072008e-25);
   func1014->SetParLimits(7,0,0);
   func1014->Draw("Csame");
   
   Double_t _fx1013[13] = {
   1000,
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
   Double_t _fy1013[13] = {
   0.01640243,
   0.1227209,
   0.1412791,
   0.1368391,
   0.1325,
   0.1275592,
   0.1202726,
   0.1124642,
   0.1055346,
   0.09893228,
   0.09327259,
   0.08791967,
   0.04972201};
   Double_t _fex1013[13] = {
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
   0,
   0};
   Double_t _fey1013[13] = {
   0.000178858,
   0.0005107513,
   0.0005892711,
   0.0005212061,
   0.0005272559,
   0.000511408,
   0.0005043409,
   0.000512065,
   0.0004706391,
   0.0004809884,
   0.0006202451,
   0.001419713,
   0.001672742};
   gre = new TGraphErrors(13,_fx1013,_fy1013,_fex1013,_fey1013);
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
   
   TH1F *Graph_Graph1013 = new TH1F("Graph_Graph1013","",100,550,5950);
   Graph_Graph1013->SetMinimum(0.003659096);
   Graph_Graph1013->SetMaximum(0.1544328);
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
   
   
   TF1 *func1014 = new TF1("func","pol7",1126,5500);
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
   func1014->SetChisquare(68.20334);
   func1014->SetNDF(4);
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
   func1014->SetParameter(0,-1.971736);
   func1014->SetParError(0,0.1471088);
   func1014->SetParLimits(0,0,0);
   func1014->SetParameter(1,0.005292177);
   func1014->SetParError(1,0.0004044372);
   func1014->SetParLimits(1,0,0);
   func1014->SetParameter(2,-5.407534e-06);
   func1014->SetParError(2,4.545023e-07);
   func1014->SetParLimits(2,0,0);
   func1014->SetParameter(3,2.929639e-09);
   func1014->SetParError(3,2.713435e-10);
   func1014->SetParLimits(3,0,0);
   func1014->SetParameter(4,-9.142854e-13);
   func1014->SetParError(4,9.32281e-14);
   func1014->SetParLimits(4,0,0);
   func1014->SetParameter(5,1.648076e-16);
   func1014->SetParError(5,1.849225e-17);
   func1014->SetParLimits(5,0,0);
   func1014->SetParameter(6,-1.592363e-20);
   func1014->SetParError(6,1.966726e-21);
   func1014->SetParLimits(6,0,0);
   func1014->SetParameter(7,6.373195e-25);
   func1014->SetParError(7,8.675953e-26);
   func1014->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1014);
   gre->Draw("p");
   
   Double_t _fx1015[13] = {
   1000,
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
   Double_t _fy1015[13] = {
   0.00434842,
   0.09144039,
   0.1170568,
   0.1269362,
   0.131475,
   0.1348292,
   0.137648,
   0.1387779,
   0.1407522,
   0.1436876,
   0.1482272,
   0.1513164,
   0.08745494};
   Double_t _fex1015[13] = {
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
   0,
   0};
   Double_t _fey1015[13] = {
   8.70838e-05,
   0.0004154896,
   0.0004506598,
   0.0005665967,
   0.0004872906,
   0.0004877942,
   0.0005007273,
   0.0005325082,
   0.0005046626,
   0.0005512553,
   0.0007470818,
   0.001780754,
   0.00133767};
   gre = new TGraphErrors(13,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,550,5950);
   Graph_Graph1015->SetMinimum(0);
   Graph_Graph1015->SetMaximum(0.1679808);
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
   
   
   TF1 *func1016 = new TF1("func","pol7",1126,5500);
   func1016->SetBit(TF1::kNotDraw);
   func1016->SetFillColor(19);
   func1016->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   func1016->SetMarkerColor(ci);
   func1016->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   func1016->SetLineColor(ci);
   func1016->SetLineWidth(3);
   func1016->SetChisquare(23.4162);
   func1016->SetNDF(4);
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
   func1016->SetParameter(0,-1.227147);
   func1016->SetParError(0,0.1388557);
   func1016->SetParLimits(0,0,0);
   func1016->SetParameter(1,0.002961064);
   func1016->SetParError(1,0.0003862953);
   func1016->SetParLimits(1,0,0);
   func1016->SetParameter(2,-2.674716e-06);
   func1016->SetParError(2,4.39707e-07);
   func1016->SetParLimits(2,0,0);
   func1016->SetParameter(3,1.289895e-09);
   func1016->SetParError(3,2.659939e-10);
   func1016->SetParLimits(3,0,0);
   func1016->SetParameter(4,-3.550826e-13);
   func1016->SetParError(4,9.258926e-14);
   func1016->SetParLimits(4,0,0);
   func1016->SetParameter(5,5.509798e-17);
   func1016->SetParError(5,1.859661e-17);
   func1016->SetParLimits(5,0,0);
   func1016->SetParameter(6,-4.365948e-21);
   func1016->SetParError(6,2.001136e-21);
   func1016->SetParLimits(6,0,0);
   func1016->SetParameter(7,1.301102e-25);
   func1016->SetParError(7,8.923322e-26);
   func1016->SetParLimits(7,0,0);
   gre->GetListOfFunctions()->Add(func1016);
   gre->Draw("p");
   
   TF1 *func1017 = new TF1("func","pol7",1126,5500);
   func1017->SetBit(TF1::kNotDraw);
   func1017->SetFillColor(19);
   func1017->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   func1017->SetMarkerColor(ci);
   func1017->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   func1017->SetLineColor(ci);
   func1017->SetLineWidth(3);
   func1017->SetChisquare(23.4162);
   func1017->SetNDF(4);
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
   func1017->SetParameter(0,-1.227147);
   func1017->SetParError(0,0.1388557);
   func1017->SetParLimits(0,0,0);
   func1017->SetParameter(1,0.002961064);
   func1017->SetParError(1,0.0003862953);
   func1017->SetParLimits(1,0,0);
   func1017->SetParameter(2,-2.674716e-06);
   func1017->SetParError(2,4.39707e-07);
   func1017->SetParLimits(2,0,0);
   func1017->SetParameter(3,1.289895e-09);
   func1017->SetParError(3,2.659939e-10);
   func1017->SetParLimits(3,0,0);
   func1017->SetParameter(4,-3.550826e-13);
   func1017->SetParError(4,9.258926e-14);
   func1017->SetParLimits(4,0,0);
   func1017->SetParameter(5,5.509798e-17);
   func1017->SetParError(5,1.859661e-17);
   func1017->SetParLimits(5,0,0);
   func1017->SetParameter(6,-4.365948e-21);
   func1017->SetParError(6,2.001136e-21);
   func1017->SetParLimits(6,0,0);
   func1017->SetParameter(7,1.301102e-25);
   func1017->SetParError(7,8.923322e-26);
   func1017->SetParLimits(7,0,0);
   func1017->Draw("Csame");
   
   TF1 *func1018 = new TF1("func","pol7",1126,5500);
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
   func1018->SetChisquare(68.20334);
   func1018->SetNDF(4);
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
   func1018->SetParameter(0,-1.971736);
   func1018->SetParError(0,0.1471088);
   func1018->SetParLimits(0,0,0);
   func1018->SetParameter(1,0.005292177);
   func1018->SetParError(1,0.0004044372);
   func1018->SetParLimits(1,0,0);
   func1018->SetParameter(2,-5.407534e-06);
   func1018->SetParError(2,4.545023e-07);
   func1018->SetParLimits(2,0,0);
   func1018->SetParameter(3,2.929639e-09);
   func1018->SetParError(3,2.713435e-10);
   func1018->SetParLimits(3,0,0);
   func1018->SetParameter(4,-9.142854e-13);
   func1018->SetParError(4,9.32281e-14);
   func1018->SetParLimits(4,0,0);
   func1018->SetParameter(5,1.648076e-16);
   func1018->SetParError(5,1.849225e-17);
   func1018->SetParLimits(5,0,0);
   func1018->SetParameter(6,-1.592363e-20);
   func1018->SetParError(6,1.966726e-21);
   func1018->SetParLimits(6,0,0);
   func1018->SetParameter(7,6.373195e-25);
   func1018->SetParError(7,8.675953e-26);
   func1018->SetParLimits(7,0,0);
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
