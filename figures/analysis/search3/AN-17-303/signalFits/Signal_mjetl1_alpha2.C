void Signal_mjetl1_alpha2()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Sep 12 17:18:05 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(457.4286,-0.927835,5728.857,5.515464);
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
   
   Double_t _fx1089[13] = {
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
   Double_t _fy1089[13] = {
   2.193402,
   2.022795,
   2.062025,
   2.092847,
   1.957275,
   2.026212,
   2.008828,
   2.059847,
   1.874776,
   1.934005,
   1.795327,
   1.705994,
   1.592979};
   Double_t _fex1089[13] = {
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
   Double_t _fey1089[13] = {
   0.05594558,
   0.05017082,
   0.04607435,
   0.04342058,
   0.06981626,
   0.03805867,
   0.03705058,
   0.04245912,
   0.03487836,
   0.04577033,
   0.03311792,
   0.03748587,
   0.03671948};
   TGraphErrors *gre = new TGraphErrors(13,_fx1089,_fy1089,_fex1089,_fey1089);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1089 = new TH1F("Graph_Graph1089","",100,550,5950);
   Graph_Graph1089->SetMinimum(0);
   Graph_Graph1089->SetMaximum(5);
   Graph_Graph1089->SetDirectory(0);
   Graph_Graph1089->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1089->SetLineColor(ci);
   Graph_Graph1089->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph1089->GetXaxis()->SetRange(11,92);
   Graph_Graph1089->GetXaxis()->SetNdivisions(209);
   Graph_Graph1089->GetXaxis()->SetLabelFont(42);
   Graph_Graph1089->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph1089->GetXaxis()->SetTitleFont(42);
   Graph_Graph1089->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph1089->GetYaxis()->SetNdivisions(504);
   Graph_Graph1089->GetYaxis()->SetLabelFont(42);
   Graph_Graph1089->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph1089->GetYaxis()->SetTitleFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelFont(42);
   Graph_Graph1089->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1089->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1089);
   
   
   TF1 *alpha2_func1090 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1090->SetBit(TF1::kNotDraw);
   alpha2_func1090->SetFillColor(19);
   alpha2_func1090->SetFillStyle(0);
   alpha2_func1090->SetLineColor(2);
   alpha2_func1090->SetLineWidth(2);
   alpha2_func1090->SetChisquare(15.06018);
   alpha2_func1090->SetNDF(9);
   alpha2_func1090->GetXaxis()->SetLabelFont(42);
   alpha2_func1090->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1090->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1090->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1090->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1090->GetXaxis()->SetTitleFont(42);
   alpha2_func1090->GetYaxis()->SetLabelFont(42);
   alpha2_func1090->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1090->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1090->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1090->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1090->GetYaxis()->SetTitleFont(42);
   alpha2_func1090->SetParameter(0,2.246543);
   alpha2_func1090->SetParError(0,0.151453);
   alpha2_func1090->SetParLimits(0,0,0);
   alpha2_func1090->SetParameter(1,-0.0001797602);
   alpha2_func1090->SetParError(1,0.0001697609);
   alpha2_func1090->SetParLimits(1,0,0);
   alpha2_func1090->SetParameter(2,5.202988e-08);
   alpha2_func1090->SetParError(2,5.598957e-08);
   alpha2_func1090->SetParLimits(2,0,0);
   alpha2_func1090->SetParameter(3,-7.489888e-12);
   alpha2_func1090->SetParError(3,5.618633e-12);
   alpha2_func1090->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1090);
   gre->Draw("ap");
   
   Double_t _fx1091[13] = {
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
   Double_t _fy1091[13] = {
   1.509115,
   1.481236,
   1.459669,
   1.491652,
   1.615936,
   1.634343,
   1.67779,
   1.559171,
   1.670027,
   1.574047,
   1.556502,
   1.703299,
   1.740007};
   Double_t _fex1091[13] = {
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
   Double_t _fey1091[13] = {
   0.08738255,
   0.03371706,
   0.02912906,
   0.02930059,
   0.03474668,
   0.03567063,
   0.03917698,
   0.03444731,
   0.03229615,
   0.03907745,
   0.03865001,
   0.07071354,
   0.061539};
   gre = new TGraphErrors(13,_fx1091,_fy1091,_fex1091,_fey1091);
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
   
   TH1F *Graph_Graph1091 = new TH1F("Graph_Graph1091","",100,550,5950);
   Graph_Graph1091->SetMinimum(1.383752);
   Graph_Graph1091->SetMaximum(1.839528);
   Graph_Graph1091->SetDirectory(0);
   Graph_Graph1091->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1091->SetLineColor(ci);
   Graph_Graph1091->GetXaxis()->SetLabelFont(42);
   Graph_Graph1091->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetXaxis()->SetTitleFont(42);
   Graph_Graph1091->GetYaxis()->SetLabelFont(42);
   Graph_Graph1091->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetYaxis()->SetTitleFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelFont(42);
   Graph_Graph1091->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1091->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1091->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1091);
   
   
   TF1 *alpha2_func1092 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1092->SetBit(TF1::kNotDraw);
   alpha2_func1092->SetFillColor(19);
   alpha2_func1092->SetFillStyle(0);
   alpha2_func1092->SetLineColor(2);
   alpha2_func1092->SetLineWidth(2);
   alpha2_func1092->SetChisquare(21.68607);
   alpha2_func1092->SetNDF(9);
   alpha2_func1092->GetXaxis()->SetLabelFont(42);
   alpha2_func1092->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1092->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1092->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1092->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1092->GetXaxis()->SetTitleFont(42);
   alpha2_func1092->GetYaxis()->SetLabelFont(42);
   alpha2_func1092->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1092->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1092->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1092->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1092->GetYaxis()->SetTitleFont(42);
   alpha2_func1092->SetParameter(0,0.8265569);
   alpha2_func1092->SetParError(0,0.1563635);
   alpha2_func1092->SetParLimits(0,0,0);
   alpha2_func1092->SetParameter(1,0.0007657657);
   alpha2_func1092->SetParError(1,0.0001791721);
   alpha2_func1092->SetParLimits(1,0,0);
   alpha2_func1092->SetParameter(2,-2.347762e-07);
   alpha2_func1092->SetParError(2,6.056117e-08);
   alpha2_func1092->SetParLimits(2,0,0);
   alpha2_func1092->SetParameter(3,2.282522e-11);
   alpha2_func1092->SetParError(3,6.257448e-12);
   alpha2_func1092->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1092);
   gre->Draw("p");
   
   Double_t _fx1093[13] = {
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
   Double_t _fy1093[13] = {
   2.193402,
   2.022795,
   2.062025,
   2.092847,
   1.957275,
   2.026212,
   2.008828,
   2.059847,
   1.874776,
   1.934005,
   1.795327,
   1.705994,
   1.592979};
   Double_t _fex1093[13] = {
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
   Double_t _fey1093[13] = {
   0.05594558,
   0.05017082,
   0.04607435,
   0.04342058,
   0.06981626,
   0.03805867,
   0.03705058,
   0.04245912,
   0.03487836,
   0.04577033,
   0.03311792,
   0.03748587,
   0.03671948};
   gre = new TGraphErrors(13,_fx1093,_fy1093,_fex1093,_fey1093);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph_Graph10891093 = new TH1F("Graph_Graph_Graph10891093","",100,550,5950);
   Graph_Graph_Graph10891093->SetMinimum(0);
   Graph_Graph_Graph10891093->SetMaximum(5);
   Graph_Graph_Graph10891093->SetDirectory(0);
   Graph_Graph_Graph10891093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10891093->SetLineColor(ci);
   Graph_Graph_Graph10891093->GetXaxis()->SetTitle("M_{VV} (GeV)");
   Graph_Graph_Graph10891093->GetXaxis()->SetRange(11,92);
   Graph_Graph_Graph10891093->GetXaxis()->SetNdivisions(209);
   Graph_Graph_Graph10891093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10891093->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10891093->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10891093->GetXaxis()->SetTitleOffset(0.94);
   Graph_Graph_Graph10891093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10891093->GetYaxis()->SetTitle("alpha2 (GeV)");
   Graph_Graph_Graph10891093->GetYaxis()->SetNdivisions(504);
   Graph_Graph_Graph10891093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10891093->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10891093->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10891093->GetYaxis()->SetTitleOffset(0.97);
   Graph_Graph_Graph10891093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10891093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10891093->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10891093->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10891093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10891093);
   
   
   TF1 *alpha2_func1094 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1094->SetBit(TF1::kNotDraw);
   alpha2_func1094->SetFillColor(19);
   alpha2_func1094->SetFillStyle(0);
   alpha2_func1094->SetLineColor(2);
   alpha2_func1094->SetLineWidth(2);
   alpha2_func1094->SetChisquare(15.06018);
   alpha2_func1094->SetNDF(9);
   alpha2_func1094->GetXaxis()->SetLabelFont(42);
   alpha2_func1094->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1094->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1094->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1094->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1094->GetXaxis()->SetTitleFont(42);
   alpha2_func1094->GetYaxis()->SetLabelFont(42);
   alpha2_func1094->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1094->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1094->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1094->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1094->GetYaxis()->SetTitleFont(42);
   alpha2_func1094->SetParameter(0,2.246543);
   alpha2_func1094->SetParError(0,0.151453);
   alpha2_func1094->SetParLimits(0,0,0);
   alpha2_func1094->SetParameter(1,-0.0001797602);
   alpha2_func1094->SetParError(1,0.0001697609);
   alpha2_func1094->SetParLimits(1,0,0);
   alpha2_func1094->SetParameter(2,5.202988e-08);
   alpha2_func1094->SetParError(2,5.598957e-08);
   alpha2_func1094->SetParLimits(2,0,0);
   alpha2_func1094->SetParameter(3,-7.489888e-12);
   alpha2_func1094->SetParError(3,5.618633e-12);
   alpha2_func1094->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1094);
   gre->Draw("p");
   
   TF1 *alpha2_func1095 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1095->SetFillColor(19);
   alpha2_func1095->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1095->SetMarkerColor(ci);
   alpha2_func1095->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1095->SetLineColor(ci);
   alpha2_func1095->SetLineWidth(3);
   alpha2_func1095->SetChisquare(15.06018);
   alpha2_func1095->SetNDF(9);
   alpha2_func1095->GetXaxis()->SetLabelFont(42);
   alpha2_func1095->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1095->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1095->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1095->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1095->GetXaxis()->SetTitleFont(42);
   alpha2_func1095->GetYaxis()->SetLabelFont(42);
   alpha2_func1095->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1095->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1095->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1095->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1095->GetYaxis()->SetTitleFont(42);
   alpha2_func1095->SetParameter(0,2.246543);
   alpha2_func1095->SetParError(0,0.151453);
   alpha2_func1095->SetParLimits(0,0,0);
   alpha2_func1095->SetParameter(1,-0.0001797602);
   alpha2_func1095->SetParError(1,0.0001697609);
   alpha2_func1095->SetParLimits(1,0,0);
   alpha2_func1095->SetParameter(2,5.202988e-08);
   alpha2_func1095->SetParError(2,5.598957e-08);
   alpha2_func1095->SetParLimits(2,0,0);
   alpha2_func1095->SetParameter(3,-7.489888e-12);
   alpha2_func1095->SetParError(3,5.618633e-12);
   alpha2_func1095->SetParLimits(3,0,0);
   alpha2_func1095->Draw("Csame");
   
   TF1 *alpha2_func1096 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1096->SetFillColor(19);
   alpha2_func1096->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1096->SetMarkerColor(ci);
   alpha2_func1096->SetMarkerStyle(24);

   ci = TColor::GetColor("#4292c6");
   alpha2_func1096->SetLineColor(ci);
   alpha2_func1096->SetLineWidth(3);
   alpha2_func1096->SetLineStyle(9);
   alpha2_func1096->SetChisquare(21.68607);
   alpha2_func1096->SetNDF(9);
   alpha2_func1096->GetXaxis()->SetLabelFont(42);
   alpha2_func1096->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1096->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1096->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1096->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1096->GetXaxis()->SetTitleFont(42);
   alpha2_func1096->GetYaxis()->SetLabelFont(42);
   alpha2_func1096->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1096->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1096->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1096->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1096->GetYaxis()->SetTitleFont(42);
   alpha2_func1096->SetParameter(0,0.8265569);
   alpha2_func1096->SetParError(0,0.1563635);
   alpha2_func1096->SetParLimits(0,0,0);
   alpha2_func1096->SetParameter(1,0.0007657657);
   alpha2_func1096->SetParError(1,0.0001791721);
   alpha2_func1096->SetParLimits(1,0,0);
   alpha2_func1096->SetParameter(2,-2.347762e-07);
   alpha2_func1096->SetParError(2,6.056117e-08);
   alpha2_func1096->SetParLimits(2,0,0);
   alpha2_func1096->SetParameter(3,2.282522e-11);
   alpha2_func1096->SetParError(3,6.257448e-12);
   alpha2_func1096->SetParLimits(3,0,0);
   alpha2_func1096->Draw("Csame");
   
   Double_t _fx1095[13] = {
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
   Double_t _fy1095[13] = {
   1.197208,
   1.237356,
   1.286263,
   1.331506,
   1.393015,
   1.412405,
   1.484839,
   1.487113,
   1.521814,
   1.49033,
   1.525723,
   1.37378,
   1.479865};
   Double_t _fex1095[13] = {
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
   Double_t _fey1095[13] = {
   0.007243823,
   0.006583658,
   0.006728978,
   0.006711672,
   0.006847125,
   0.006854255,
   0.007454066,
   0.007996742,
   0.0108811,
   0.01141857,
   0.006695867,
   0.02138084,
   0.02112386};
   gre = new TGraphErrors(13,_fx1095,_fy1095,_fex1095,_fey1095);
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
   
   TH1F *Graph_Graph1095 = new TH1F("Graph_Graph1095","",100,550,5950);
   Graph_Graph1095->SetMinimum(1.155691);
   Graph_Graph1095->SetMaximum(1.566968);
   Graph_Graph1095->SetDirectory(0);
   Graph_Graph1095->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1095->SetLineColor(ci);
   Graph_Graph1095->GetXaxis()->SetLabelFont(42);
   Graph_Graph1095->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1095->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1095->GetXaxis()->SetTitleFont(42);
   Graph_Graph1095->GetYaxis()->SetLabelFont(42);
   Graph_Graph1095->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1095->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1095->GetYaxis()->SetTitleFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelFont(42);
   Graph_Graph1095->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1095->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1095);
   
   
   TF1 *alpha2_func1096 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1096->SetBit(TF1::kNotDraw);
   alpha2_func1096->SetFillColor(19);
   alpha2_func1096->SetFillStyle(0);
   alpha2_func1096->SetLineColor(2);
   alpha2_func1096->SetLineWidth(2);
   alpha2_func1096->SetChisquare(63.54979);
   alpha2_func1096->SetNDF(9);
   alpha2_func1096->GetXaxis()->SetLabelFont(42);
   alpha2_func1096->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1096->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1096->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1096->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1096->GetXaxis()->SetTitleFont(42);
   alpha2_func1096->GetYaxis()->SetLabelFont(42);
   alpha2_func1096->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1096->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1096->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1096->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1096->GetYaxis()->SetTitleFont(42);
   alpha2_func1096->SetParameter(0,0.7970807);
   alpha2_func1096->SetParError(0,0.02684699);
   alpha2_func1096->SetParLimits(0,0,0);
   alpha2_func1096->SetParameter(1,0.0004885134);
   alpha2_func1096->SetParError(1,3.33569e-05);
   alpha2_func1096->SetParLimits(1,0,0);
   alpha2_func1096->SetParameter(2,-1.046821e-07);
   alpha2_func1096->SetParError(2,1.234769e-08);
   alpha2_func1096->SetParLimits(2,0,0);
   alpha2_func1096->SetParameter(3,6.905111e-12);
   alpha2_func1096->SetParError(3,1.393649e-12);
   alpha2_func1096->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1096);
   gre->Draw("p");
   
   Double_t _fx1097[13] = {
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
   Double_t _fy1097[13] = {
   1.820288,
   1.860924,
   1.867466,
   1.887174,
   1.890449,
   1.901082,
   1.862681,
   1.816528,
   1.775716,
   1.730721,
   1.705667,
   1.646595,
   1.612677};
   Double_t _fex1097[13] = {
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
   Double_t _fey1097[13] = {
   0.01280162,
   0.01111845,
   0.01036707,
   0.009994847,
   0.009390117,
   0.009231641,
   0.00860412,
   0.008192328,
   0.007710952,
   0.007058101,
   0.006687628,
   0.01860305,
   0.01612947};
   gre = new TGraphErrors(13,_fx1097,_fy1097,_fex1097,_fey1097);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1097 = new TH1F("Graph_Graph1097","",100,550,5950);
   Graph_Graph1097->SetMinimum(1.565171);
   Graph_Graph1097->SetMaximum(1.941691);
   Graph_Graph1097->SetDirectory(0);
   Graph_Graph1097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1097->SetLineColor(ci);
   Graph_Graph1097->GetXaxis()->SetLabelFont(42);
   Graph_Graph1097->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetXaxis()->SetTitleFont(42);
   Graph_Graph1097->GetYaxis()->SetLabelFont(42);
   Graph_Graph1097->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetYaxis()->SetTitleFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelFont(42);
   Graph_Graph1097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1097);
   
   
   TF1 *alpha2_func1098 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1098->SetBit(TF1::kNotDraw);
   alpha2_func1098->SetFillColor(19);
   alpha2_func1098->SetFillStyle(0);
   alpha2_func1098->SetLineColor(2);
   alpha2_func1098->SetLineWidth(2);
   alpha2_func1098->SetChisquare(19.72803);
   alpha2_func1098->SetNDF(9);
   alpha2_func1098->GetXaxis()->SetLabelFont(42);
   alpha2_func1098->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1098->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1098->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1098->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1098->GetXaxis()->SetTitleFont(42);
   alpha2_func1098->GetYaxis()->SetLabelFont(42);
   alpha2_func1098->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1098->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1098->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1098->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1098->GetYaxis()->SetTitleFont(42);
   alpha2_func1098->SetParameter(0,1.641991);
   alpha2_func1098->SetParError(0,0.03552123);
   alpha2_func1098->SetParLimits(0,0,0);
   alpha2_func1098->SetParameter(1,0.0002919566);
   alpha2_func1098->SetParError(1,4.036287e-05);
   alpha2_func1098->SetParLimits(1,0,0);
   alpha2_func1098->SetParameter(2,-1.041834e-07);
   alpha2_func1098->SetParError(2,1.365748e-08);
   alpha2_func1098->SetParLimits(2,0,0);
   alpha2_func1098->SetParameter(3,9.254121e-12);
   alpha2_func1098->SetParError(3,1.427681e-12);
   alpha2_func1098->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1098);
   gre->Draw("p");
   
   TF1 *alpha2_func1099 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1099->SetFillColor(19);
   alpha2_func1099->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1099->SetMarkerColor(ci);
   alpha2_func1099->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1099->SetLineColor(ci);
   alpha2_func1099->SetLineWidth(3);
   alpha2_func1099->SetChisquare(19.72803);
   alpha2_func1099->SetNDF(9);
   alpha2_func1099->GetXaxis()->SetLabelFont(42);
   alpha2_func1099->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1099->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1099->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1099->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1099->GetXaxis()->SetTitleFont(42);
   alpha2_func1099->GetYaxis()->SetLabelFont(42);
   alpha2_func1099->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1099->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1099->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1099->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1099->GetYaxis()->SetTitleFont(42);
   alpha2_func1099->SetParameter(0,1.641991);
   alpha2_func1099->SetParError(0,0.03552123);
   alpha2_func1099->SetParLimits(0,0,0);
   alpha2_func1099->SetParameter(1,0.0002919566);
   alpha2_func1099->SetParError(1,4.036287e-05);
   alpha2_func1099->SetParLimits(1,0,0);
   alpha2_func1099->SetParameter(2,-1.041834e-07);
   alpha2_func1099->SetParError(2,1.365748e-08);
   alpha2_func1099->SetParLimits(2,0,0);
   alpha2_func1099->SetParameter(3,9.254121e-12);
   alpha2_func1099->SetParError(3,1.427681e-12);
   alpha2_func1099->SetParLimits(3,0,0);
   alpha2_func1099->Draw("Csame");
   
   TF1 *alpha2_func1100 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1100->SetFillColor(19);
   alpha2_func1100->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1100->SetMarkerColor(ci);
   alpha2_func1100->SetMarkerStyle(24);

   ci = TColor::GetColor("#41ab5d");
   alpha2_func1100->SetLineColor(ci);
   alpha2_func1100->SetLineWidth(3);
   alpha2_func1100->SetLineStyle(9);
   alpha2_func1100->SetChisquare(63.54979);
   alpha2_func1100->SetNDF(9);
   alpha2_func1100->GetXaxis()->SetLabelFont(42);
   alpha2_func1100->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1100->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1100->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1100->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1100->GetXaxis()->SetTitleFont(42);
   alpha2_func1100->GetYaxis()->SetLabelFont(42);
   alpha2_func1100->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1100->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1100->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1100->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1100->GetYaxis()->SetTitleFont(42);
   alpha2_func1100->SetParameter(0,0.7970807);
   alpha2_func1100->SetParError(0,0.02684699);
   alpha2_func1100->SetParLimits(0,0,0);
   alpha2_func1100->SetParameter(1,0.0004885134);
   alpha2_func1100->SetParError(1,3.33569e-05);
   alpha2_func1100->SetParLimits(1,0,0);
   alpha2_func1100->SetParameter(2,-1.046821e-07);
   alpha2_func1100->SetParError(2,1.234769e-08);
   alpha2_func1100->SetParLimits(2,0,0);
   alpha2_func1100->SetParameter(3,6.905111e-12);
   alpha2_func1100->SetParError(3,1.393649e-12);
   alpha2_func1100->SetParLimits(3,0,0);
   alpha2_func1100->Draw("Csame");
   
   Double_t _fx1099[13] = {
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
   Double_t _fy1099[13] = {
   1.792474,
   1.710884,
   1.69208,
   1.808339,
   1.868892,
   1.929137,
   2.11009,
   2.021612,
   2.072411,
   2.120699,
   2.176392,
   2.095889,
   2.07075};
   Double_t _fex1099[13] = {
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
   Double_t _fey1099[13] = {
   0.02602706,
   0.02907943,
   0.02479144,
   0.03085605,
   0.03892661,
   0.03579684,
   0.03705127,
   0.03614788,
   0.04563323,
   0.04279789,
   0.048674,
   0.0471479,
   0.05465704};
   gre = new TGraphErrors(13,_fx1099,_fy1099,_fex1099,_fey1099);
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
   
   TH1F *Graph_Graph1099 = new TH1F("Graph_Graph1099","",100,550,5950);
   Graph_Graph1099->SetMinimum(1.611511);
   Graph_Graph1099->SetMaximum(2.280844);
   Graph_Graph1099->SetDirectory(0);
   Graph_Graph1099->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1099->SetLineColor(ci);
   Graph_Graph1099->GetXaxis()->SetLabelFont(42);
   Graph_Graph1099->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetXaxis()->SetTitleFont(42);
   Graph_Graph1099->GetYaxis()->SetLabelFont(42);
   Graph_Graph1099->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetYaxis()->SetTitleFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelFont(42);
   Graph_Graph1099->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1099->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1099);
   
   
   TF1 *alpha2_func1100 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1100->SetBit(TF1::kNotDraw);
   alpha2_func1100->SetFillColor(19);
   alpha2_func1100->SetFillStyle(0);
   alpha2_func1100->SetLineColor(2);
   alpha2_func1100->SetLineWidth(2);
   alpha2_func1100->SetChisquare(41.07196);
   alpha2_func1100->SetNDF(9);
   alpha2_func1100->GetXaxis()->SetLabelFont(42);
   alpha2_func1100->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1100->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1100->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1100->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1100->GetXaxis()->SetTitleFont(42);
   alpha2_func1100->GetYaxis()->SetLabelFont(42);
   alpha2_func1100->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1100->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1100->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1100->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1100->GetYaxis()->SetTitleFont(42);
   alpha2_func1100->SetParameter(0,1.593168);
   alpha2_func1100->SetParError(0,0.1098079);
   alpha2_func1100->SetParLimits(0,0,0);
   alpha2_func1100->SetParameter(1,7.838979e-05);
   alpha2_func1100->SetParError(1,0.0001372123);
   alpha2_func1100->SetParLimits(1,0,0);
   alpha2_func1100->SetParameter(2,5.422762e-08);
   alpha2_func1100->SetParError(2,4.931897e-08);
   alpha2_func1100->SetParLimits(2,0,0);
   alpha2_func1100->SetParameter(3,-9.758602e-12);
   alpha2_func1100->SetParError(3,5.297012e-12);
   alpha2_func1100->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1100);
   gre->Draw("p");
   
   Double_t _fx1101[13] = {
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
   Double_t _fy1101[13] = {
   2.505101,
   2.516365,
   2.6173,
   2.727512,
   2.58449,
   2.507712,
   2.574441,
   2.540442,
   2.535271,
   2.569054,
   2.486669,
   2.188075,
   2.335835};
   Double_t _fex1101[13] = {
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
   Double_t _fey1101[13] = {
   0.08565428,
   0.07026435,
   0.07650838,
   0.06610764,
   0.06416037,
   0.05095254,
   0.05467858,
   0.07044708,
   0.05072356,
   0.05948364,
   0.0529917,
   0.04487818,
   0.04977367};
   gre = new TGraphErrors(13,_fx1101,_fy1101,_fex1101,_fey1101);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1101 = new TH1F("Graph_Graph1101","",100,550,5950);
   Graph_Graph1101->SetMinimum(2.078155);
   Graph_Graph1101->SetMaximum(2.858661);
   Graph_Graph1101->SetDirectory(0);
   Graph_Graph1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1101->SetLineColor(ci);
   Graph_Graph1101->GetXaxis()->SetLabelFont(42);
   Graph_Graph1101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1101->GetXaxis()->SetTitleFont(42);
   Graph_Graph1101->GetYaxis()->SetLabelFont(42);
   Graph_Graph1101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1101->GetYaxis()->SetTitleFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelFont(42);
   Graph_Graph1101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1101);
   
   
   TF1 *alpha2_func1102 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1102->SetBit(TF1::kNotDraw);
   alpha2_func1102->SetFillColor(19);
   alpha2_func1102->SetFillStyle(0);
   alpha2_func1102->SetLineColor(2);
   alpha2_func1102->SetLineWidth(2);
   alpha2_func1102->SetChisquare(26.8499);
   alpha2_func1102->SetNDF(9);
   alpha2_func1102->GetXaxis()->SetLabelFont(42);
   alpha2_func1102->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1102->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1102->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1102->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1102->GetXaxis()->SetTitleFont(42);
   alpha2_func1102->GetYaxis()->SetLabelFont(42);
   alpha2_func1102->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1102->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1102->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1102->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1102->GetYaxis()->SetTitleFont(42);
   alpha2_func1102->SetParameter(0,2.352647);
   alpha2_func1102->SetParError(0,0.2215546);
   alpha2_func1102->SetParLimits(0,0,0);
   alpha2_func1102->SetParameter(1,0.0002450793);
   alpha2_func1102->SetParError(1,0.0002444114);
   alpha2_func1102->SetParLimits(1,0,0);
   alpha2_func1102->SetParameter(2,-7.007688e-08);
   alpha2_func1102->SetParError(2,7.981513e-08);
   alpha2_func1102->SetParLimits(2,0,0);
   alpha2_func1102->SetParameter(3,4.079526e-12);
   alpha2_func1102->SetParError(3,7.960319e-12);
   alpha2_func1102->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1102);
   gre->Draw("p");
   
   TF1 *alpha2_func1103 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1103->SetFillColor(19);
   alpha2_func1103->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1103->SetMarkerColor(ci);
   alpha2_func1103->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1103->SetLineColor(ci);
   alpha2_func1103->SetLineWidth(3);
   alpha2_func1103->SetChisquare(26.8499);
   alpha2_func1103->SetNDF(9);
   alpha2_func1103->GetXaxis()->SetLabelFont(42);
   alpha2_func1103->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1103->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1103->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1103->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1103->GetXaxis()->SetTitleFont(42);
   alpha2_func1103->GetYaxis()->SetLabelFont(42);
   alpha2_func1103->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1103->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1103->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1103->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1103->GetYaxis()->SetTitleFont(42);
   alpha2_func1103->SetParameter(0,2.352647);
   alpha2_func1103->SetParError(0,0.2215546);
   alpha2_func1103->SetParLimits(0,0,0);
   alpha2_func1103->SetParameter(1,0.0002450793);
   alpha2_func1103->SetParError(1,0.0002444114);
   alpha2_func1103->SetParLimits(1,0,0);
   alpha2_func1103->SetParameter(2,-7.007688e-08);
   alpha2_func1103->SetParError(2,7.981513e-08);
   alpha2_func1103->SetParLimits(2,0,0);
   alpha2_func1103->SetParameter(3,4.079526e-12);
   alpha2_func1103->SetParError(3,7.960319e-12);
   alpha2_func1103->SetParLimits(3,0,0);
   alpha2_func1103->Draw("Csame");
   
   TF1 *alpha2_func1104 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1104->SetFillColor(19);
   alpha2_func1104->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1104->SetMarkerColor(ci);
   alpha2_func1104->SetMarkerStyle(24);

   ci = TColor::GetColor("#ef3b2c");
   alpha2_func1104->SetLineColor(ci);
   alpha2_func1104->SetLineWidth(3);
   alpha2_func1104->SetLineStyle(9);
   alpha2_func1104->SetChisquare(41.07196);
   alpha2_func1104->SetNDF(9);
   alpha2_func1104->GetXaxis()->SetLabelFont(42);
   alpha2_func1104->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1104->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1104->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1104->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1104->GetXaxis()->SetTitleFont(42);
   alpha2_func1104->GetYaxis()->SetLabelFont(42);
   alpha2_func1104->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1104->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1104->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1104->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1104->GetYaxis()->SetTitleFont(42);
   alpha2_func1104->SetParameter(0,1.593168);
   alpha2_func1104->SetParError(0,0.1098079);
   alpha2_func1104->SetParLimits(0,0,0);
   alpha2_func1104->SetParameter(1,7.838979e-05);
   alpha2_func1104->SetParError(1,0.0001372123);
   alpha2_func1104->SetParLimits(1,0,0);
   alpha2_func1104->SetParameter(2,5.422762e-08);
   alpha2_func1104->SetParError(2,4.931897e-08);
   alpha2_func1104->SetParLimits(2,0,0);
   alpha2_func1104->SetParameter(3,-9.758602e-12);
   alpha2_func1104->SetParError(3,5.297012e-12);
   alpha2_func1104->SetParLimits(3,0,0);
   alpha2_func1104->Draw("Csame");
   
   Double_t _fx1103[13] = {
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
   Double_t _fy1103[13] = {
   1.316997,
   1.389321,
   1.434103,
   1.52726,
   1.605912,
   1.694091,
   1.853469,
   1.93141,
   2.030997,
   2.075492,
   1.999375,
   2.152003,
   2.217904};
   Double_t _fex1103[13] = {
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
   Double_t _fey1103[13] = {
   0.00646436,
   0.006227811,
   0.006456984,
   0.007329404,
   0.008662688,
   0.01122629,
   0.008708298,
   0.01151218,
   0.01099103,
   0.0133399,
   0.03796527,
   0.05343518,
   0.04925423};
   gre = new TGraphErrors(13,_fx1103,_fy1103,_fex1103,_fey1103);
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
   
   TH1F *Graph_Graph1103 = new TH1F("Graph_Graph1103","",100,550,5950);
   Graph_Graph1103->SetMinimum(1.21487);
   Graph_Graph1103->SetMaximum(2.36282);
   Graph_Graph1103->SetDirectory(0);
   Graph_Graph1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1103->SetLineColor(ci);
   Graph_Graph1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph1103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph1103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph1103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1103);
   
   
   TF1 *alpha2_func1104 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1104->SetBit(TF1::kNotDraw);
   alpha2_func1104->SetFillColor(19);
   alpha2_func1104->SetFillStyle(0);
   alpha2_func1104->SetLineColor(2);
   alpha2_func1104->SetLineWidth(2);
   alpha2_func1104->SetChisquare(65.10617);
   alpha2_func1104->SetNDF(9);
   alpha2_func1104->GetXaxis()->SetLabelFont(42);
   alpha2_func1104->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1104->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1104->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1104->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1104->GetXaxis()->SetTitleFont(42);
   alpha2_func1104->GetYaxis()->SetLabelFont(42);
   alpha2_func1104->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1104->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1104->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1104->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1104->GetYaxis()->SetTitleFont(42);
   alpha2_func1104->SetParameter(0,0.8276106);
   alpha2_func1104->SetParError(0,0.03252303);
   alpha2_func1104->SetParLimits(0,0,0);
   alpha2_func1104->SetParameter(1,0.0005231442);
   alpha2_func1104->SetParError(1,4.350985e-05);
   alpha2_func1104->SetParLimits(1,0,0);
   alpha2_func1104->SetParameter(2,-4.818681e-08);
   alpha2_func1104->SetParError(2,1.721059e-08);
   alpha2_func1104->SetParLimits(2,0,0);
   alpha2_func1104->SetParameter(3,-8.934778e-13);
   alpha2_func1104->SetParError(3,2.080718e-12);
   alpha2_func1104->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1104);
   gre->Draw("p");
   
   Double_t _fx1105[13] = {
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
   Double_t _fy1105[13] = {
   2.043755,
   2.153032,
   2.191294,
   2.230721,
   2.2768,
   2.198945,
   2.301691,
   2.242827,
   2.174195,
   2.134248,
   2.155462,
   2.145964,
   1.986981};
   Double_t _fex1105[13] = {
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
   Double_t _fey1105[13] = {
   0.01151664,
   0.0115488,
   0.01158411,
   0.01155538,
   0.01214667,
   0.01591191,
   0.01203202,
   0.01256801,
   0.01209737,
   0.01325549,
   0.09903851,
   0.03557576,
   0.07396959};
   gre = new TGraphErrors(13,_fx1105,_fy1105,_fex1105,_fey1105);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1105 = new TH1F("Graph_Graph1105","",100,550,5950);
   Graph_Graph1105->SetMinimum(1.87294);
   Graph_Graph1105->SetMaximum(2.353794);
   Graph_Graph1105->SetDirectory(0);
   Graph_Graph1105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1105->SetLineColor(ci);
   Graph_Graph1105->GetXaxis()->SetLabelFont(42);
   Graph_Graph1105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1105->GetXaxis()->SetTitleFont(42);
   Graph_Graph1105->GetYaxis()->SetLabelFont(42);
   Graph_Graph1105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1105->GetYaxis()->SetTitleFont(42);
   Graph_Graph1105->GetZaxis()->SetLabelFont(42);
   Graph_Graph1105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1105);
   
   
   TF1 *alpha2_func1106 = new TF1("alpha2_func","pol3",1000,5500);
   alpha2_func1106->SetBit(TF1::kNotDraw);
   alpha2_func1106->SetFillColor(19);
   alpha2_func1106->SetFillStyle(0);
   alpha2_func1106->SetLineColor(2);
   alpha2_func1106->SetLineWidth(2);
   alpha2_func1106->SetChisquare(43.83053);
   alpha2_func1106->SetNDF(9);
   alpha2_func1106->GetXaxis()->SetLabelFont(42);
   alpha2_func1106->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1106->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1106->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1106->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1106->GetXaxis()->SetTitleFont(42);
   alpha2_func1106->GetYaxis()->SetLabelFont(42);
   alpha2_func1106->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1106->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1106->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1106->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1106->GetYaxis()->SetTitleFont(42);
   alpha2_func1106->SetParameter(0,1.443931);
   alpha2_func1106->SetParError(0,0.04923156);
   alpha2_func1106->SetParLimits(0,0,0);
   alpha2_func1106->SetParameter(1,0.0008744337);
   alpha2_func1106->SetParError(1,6.295507e-05);
   alpha2_func1106->SetParLimits(1,0,0);
   alpha2_func1106->SetParameter(2,-2.829359e-07);
   alpha2_func1106->SetParError(2,2.384192e-08);
   alpha2_func1106->SetParLimits(2,0,0);
   alpha2_func1106->SetParameter(3,2.678578e-11);
   alpha2_func1106->SetParError(3,2.779433e-12);
   alpha2_func1106->SetParLimits(3,0,0);
   gre->GetListOfFunctions()->Add(alpha2_func1106);
   gre->Draw("p");
   
   TF1 *alpha2_func1107 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1107->SetFillColor(19);
   alpha2_func1107->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1107->SetMarkerColor(ci);
   alpha2_func1107->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1107->SetLineColor(ci);
   alpha2_func1107->SetLineWidth(3);
   alpha2_func1107->SetChisquare(43.83053);
   alpha2_func1107->SetNDF(9);
   alpha2_func1107->GetXaxis()->SetLabelFont(42);
   alpha2_func1107->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1107->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1107->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1107->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1107->GetXaxis()->SetTitleFont(42);
   alpha2_func1107->GetYaxis()->SetLabelFont(42);
   alpha2_func1107->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1107->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1107->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1107->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1107->GetYaxis()->SetTitleFont(42);
   alpha2_func1107->SetParameter(0,1.443931);
   alpha2_func1107->SetParError(0,0.04923156);
   alpha2_func1107->SetParLimits(0,0,0);
   alpha2_func1107->SetParameter(1,0.0008744337);
   alpha2_func1107->SetParError(1,6.295507e-05);
   alpha2_func1107->SetParLimits(1,0,0);
   alpha2_func1107->SetParameter(2,-2.829359e-07);
   alpha2_func1107->SetParError(2,2.384192e-08);
   alpha2_func1107->SetParLimits(2,0,0);
   alpha2_func1107->SetParameter(3,2.678578e-11);
   alpha2_func1107->SetParError(3,2.779433e-12);
   alpha2_func1107->SetParLimits(3,0,0);
   alpha2_func1107->Draw("Csame");
   
   TF1 *alpha2_func1108 = new TF1("alpha2_func","pol3",0,13000);
   alpha2_func1108->SetFillColor(19);
   alpha2_func1108->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1108->SetMarkerColor(ci);
   alpha2_func1108->SetMarkerStyle(24);

   ci = TColor::GetColor("#ffd300");
   alpha2_func1108->SetLineColor(ci);
   alpha2_func1108->SetLineWidth(3);
   alpha2_func1108->SetLineStyle(9);
   alpha2_func1108->SetChisquare(65.10617);
   alpha2_func1108->SetNDF(9);
   alpha2_func1108->GetXaxis()->SetLabelFont(42);
   alpha2_func1108->GetXaxis()->SetLabelOffset(0.007);
   alpha2_func1108->GetXaxis()->SetLabelSize(0.05);
   alpha2_func1108->GetXaxis()->SetTitleSize(0.06);
   alpha2_func1108->GetXaxis()->SetTitleOffset(0.9);
   alpha2_func1108->GetXaxis()->SetTitleFont(42);
   alpha2_func1108->GetYaxis()->SetLabelFont(42);
   alpha2_func1108->GetYaxis()->SetLabelOffset(0.007);
   alpha2_func1108->GetYaxis()->SetLabelSize(0.05);
   alpha2_func1108->GetYaxis()->SetTitleSize(0.06);
   alpha2_func1108->GetYaxis()->SetTitleOffset(1.25);
   alpha2_func1108->GetYaxis()->SetTitleFont(42);
   alpha2_func1108->SetParameter(0,0.8276106);
   alpha2_func1108->SetParError(0,0.03252303);
   alpha2_func1108->SetParLimits(0,0,0);
   alpha2_func1108->SetParameter(1,0.0005231442);
   alpha2_func1108->SetParError(1,4.350985e-05);
   alpha2_func1108->SetParLimits(1,0,0);
   alpha2_func1108->SetParameter(2,-4.818681e-08);
   alpha2_func1108->SetParError(2,1.721059e-08);
   alpha2_func1108->SetParLimits(2,0,0);
   alpha2_func1108->SetParameter(3,-8.934778e-13);
   alpha2_func1108->SetParError(3,2.080718e-12);
   alpha2_func1108->SetParLimits(3,0,0);
   alpha2_func1108->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("alpha2_func","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha2_func","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha2_func","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("alpha2_func","G_{B}#rightarrow ZZ","L");

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
   entry=leg->AddEntry("","HPHP","LP");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","HPLP","LP");

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
