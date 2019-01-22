void Signal_mVV_N2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 15 14:34:16 2018) by ROOT version6.02/05
   TCanvas *c = new TCanvas("c", "c",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(390,-1.85567,5806.667,11.03093);
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
   
   TF1 *pol01042 = new TF1("pol0","pol0",0,13000);
   pol01042->SetBit(TF1::kNotDraw);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#4292c6");
   pol01042->SetMarkerColor(ci);
   pol01042->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01042->SetLineColor(ci);
   pol01042->SetLineWidth(3);
   pol01042->SetChisquare(9.466331e-30);
   pol01042->SetNDF(11);
   pol01042->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol01042->GetXaxis()->SetRange(9,43);
   pol01042->GetXaxis()->SetNdivisions(209);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetLabelOffset(0.007);
   pol01042->GetXaxis()->SetLabelSize(0.05);
   pol01042->GetXaxis()->SetTitleSize(0.06);
   pol01042->GetXaxis()->SetTitleOffset(0.94);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetTitle("N2 (GeV)");
   pol01042->GetYaxis()->SetNdivisions(504);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetLabelOffset(0.007);
   pol01042->GetYaxis()->SetLabelSize(0.05);
   pol01042->GetYaxis()->SetTitleSize(0.06);
   pol01042->GetYaxis()->SetTitleOffset(0.97);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,5);
   pol01042->SetParError(0,2.677959e-16);
   pol01042->SetParLimits(0,0,0);
   pol01042->Draw("C");
   
   Double_t _fx1041[12] = {
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
   Double_t _fy1041[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1041[12] = {
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
   Double_t _fey1041[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,_fx1041,_fy1041,_fex1041,_fey1041);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#4292c6");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#4292c6");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","",100,770,5930);
   Graph_Graph1041->SetMinimum(4.9);
   Graph_Graph1041->SetMaximum(6.1);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph1041->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetXaxis()->SetTitleFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph1041->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetYaxis()->SetTitleFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1041);
   
   
   TF1 *pol01042 = new TF1("pol0","pol0",1200,5500);
   pol01042->SetFillColor(19);
   pol01042->SetFillStyle(0);
   pol01042->SetLineColor(2);
   pol01042->SetLineWidth(2);
   pol01042->SetChisquare(9.466331e-30);
   pol01042->SetNDF(11);
   pol01042->GetXaxis()->SetLabelFont(42);
   pol01042->GetXaxis()->SetLabelOffset(0.007);
   pol01042->GetXaxis()->SetLabelSize(0.05);
   pol01042->GetXaxis()->SetTitleSize(0.06);
   pol01042->GetXaxis()->SetTitleOffset(0.9);
   pol01042->GetXaxis()->SetTitleFont(42);
   pol01042->GetYaxis()->SetLabelFont(42);
   pol01042->GetYaxis()->SetLabelOffset(0.007);
   pol01042->GetYaxis()->SetLabelSize(0.05);
   pol01042->GetYaxis()->SetTitleSize(0.06);
   pol01042->GetYaxis()->SetTitleOffset(1.25);
   pol01042->GetYaxis()->SetTitleFont(42);
   pol01042->SetParameter(0,5);
   pol01042->SetParError(0,2.677959e-16);
   pol01042->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01042);
   gre->Draw("p");
   
   TF1 *pol01043 = new TF1("pol0","pol0",0,13000);
   pol01043->SetBit(TF1::kNotDraw);
   pol01043->SetFillColor(19);
   pol01043->SetFillStyle(0);

   ci = TColor::GetColor("#4292c6");
   pol01043->SetMarkerColor(ci);
   pol01043->SetMarkerStyle(8);

   ci = TColor::GetColor("#4292c6");
   pol01043->SetLineColor(ci);
   pol01043->SetLineWidth(3);
   pol01043->SetChisquare(9.466331e-30);
   pol01043->SetNDF(11);
   pol01043->GetXaxis()->SetTitle("M_{X} (GeV)");
   pol01043->GetXaxis()->SetRange(9,43);
   pol01043->GetXaxis()->SetNdivisions(209);
   pol01043->GetXaxis()->SetLabelFont(42);
   pol01043->GetXaxis()->SetLabelOffset(0.007);
   pol01043->GetXaxis()->SetLabelSize(0.05);
   pol01043->GetXaxis()->SetTitleSize(0.06);
   pol01043->GetXaxis()->SetTitleOffset(0.94);
   pol01043->GetXaxis()->SetTitleFont(42);
   pol01043->GetYaxis()->SetTitle("N2 (GeV)");
   pol01043->GetYaxis()->SetNdivisions(504);
   pol01043->GetYaxis()->SetLabelFont(42);
   pol01043->GetYaxis()->SetLabelOffset(0.007);
   pol01043->GetYaxis()->SetLabelSize(0.05);
   pol01043->GetYaxis()->SetTitleSize(0.06);
   pol01043->GetYaxis()->SetTitleOffset(0.97);
   pol01043->GetYaxis()->SetTitleFont(42);
   pol01043->SetParameter(0,5);
   pol01043->SetParError(0,2.677959e-16);
   pol01043->SetParLimits(0,0,0);
   pol01043->Draw("Csame");
   
   Double_t _fx1043[12] = {
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
   Double_t _fy1043[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1043[12] = {
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
   Double_t _fey1043[12] = {
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
   gre = new TGraphErrors(12,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#41ab5d");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#41ab5d");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","",100,770,5930);
   Graph_Graph1043->SetMinimum(4.9);
   Graph_Graph1043->SetMaximum(6.1);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol01044 = new TF1("pol0","pol0",1200,5500);
   pol01044->SetFillColor(19);
   pol01044->SetFillStyle(0);
   pol01044->SetLineColor(2);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(9.466331e-30);
   pol01044->SetNDF(11);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetLabelOffset(0.007);
   pol01044->GetXaxis()->SetLabelSize(0.05);
   pol01044->GetXaxis()->SetTitleSize(0.06);
   pol01044->GetXaxis()->SetTitleOffset(0.9);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetLabelOffset(0.007);
   pol01044->GetYaxis()->SetLabelSize(0.05);
   pol01044->GetYaxis()->SetTitleSize(0.06);
   pol01044->GetYaxis()->SetTitleOffset(1.25);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,5);
   pol01044->SetParError(0,2.677959e-16);
   pol01044->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("p");
   
   TF1 *pol01045 = new TF1("pol0","pol0",0,13000);
   pol01045->SetBit(TF1::kNotDraw);
   pol01045->SetFillColor(19);
   pol01045->SetFillStyle(0);

   ci = TColor::GetColor("#41ab5d");
   pol01045->SetMarkerColor(ci);
   pol01045->SetMarkerStyle(8);

   ci = TColor::GetColor("#41ab5d");
   pol01045->SetLineColor(ci);
   pol01045->SetLineWidth(3);
   pol01045->SetChisquare(9.466331e-30);
   pol01045->SetNDF(11);
   pol01045->GetXaxis()->SetLabelFont(42);
   pol01045->GetXaxis()->SetLabelOffset(0.007);
   pol01045->GetXaxis()->SetLabelSize(0.05);
   pol01045->GetXaxis()->SetTitleSize(0.06);
   pol01045->GetXaxis()->SetTitleOffset(0.9);
   pol01045->GetXaxis()->SetTitleFont(42);
   pol01045->GetYaxis()->SetLabelFont(42);
   pol01045->GetYaxis()->SetLabelOffset(0.007);
   pol01045->GetYaxis()->SetLabelSize(0.05);
   pol01045->GetYaxis()->SetTitleSize(0.06);
   pol01045->GetYaxis()->SetTitleOffset(1.25);
   pol01045->GetYaxis()->SetTitleFont(42);
   pol01045->SetParameter(0,5);
   pol01045->SetParError(0,2.677959e-16);
   pol01045->SetParLimits(0,0,0);
   pol01045->Draw("Csame");
   
   Double_t _fx1045[12] = {
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
   Double_t _fy1045[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1045[12] = {
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
   Double_t _fey1045[12] = {
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
   gre = new TGraphErrors(12,_fx1045,_fy1045,_fex1045,_fey1045);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ef3b2c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1045 = new TH1F("Graph_Graph1045","",100,770,5930);
   Graph_Graph1045->SetMinimum(4.9);
   Graph_Graph1045->SetMaximum(6.1);
   Graph_Graph1045->SetDirectory(0);
   Graph_Graph1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1045->SetLineColor(ci);
   Graph_Graph1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1045);
   
   
   TF1 *pol01046 = new TF1("pol0","pol0",1200,5500);
   pol01046->SetFillColor(19);
   pol01046->SetFillStyle(0);
   pol01046->SetLineColor(2);
   pol01046->SetLineWidth(2);
   pol01046->SetChisquare(9.466331e-30);
   pol01046->SetNDF(11);
   pol01046->GetXaxis()->SetLabelFont(42);
   pol01046->GetXaxis()->SetLabelOffset(0.007);
   pol01046->GetXaxis()->SetLabelSize(0.05);
   pol01046->GetXaxis()->SetTitleSize(0.06);
   pol01046->GetXaxis()->SetTitleOffset(0.9);
   pol01046->GetXaxis()->SetTitleFont(42);
   pol01046->GetYaxis()->SetLabelFont(42);
   pol01046->GetYaxis()->SetLabelOffset(0.007);
   pol01046->GetYaxis()->SetLabelSize(0.05);
   pol01046->GetYaxis()->SetTitleSize(0.06);
   pol01046->GetYaxis()->SetTitleOffset(1.25);
   pol01046->GetYaxis()->SetTitleFont(42);
   pol01046->SetParameter(0,5);
   pol01046->SetParError(0,2.677959e-16);
   pol01046->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01046);
   gre->Draw("p");
   
   TF1 *pol01047 = new TF1("pol0","pol0",0,13000);
   pol01047->SetBit(TF1::kNotDraw);
   pol01047->SetFillColor(19);
   pol01047->SetFillStyle(0);

   ci = TColor::GetColor("#ef3b2c");
   pol01047->SetMarkerColor(ci);
   pol01047->SetMarkerStyle(8);

   ci = TColor::GetColor("#ef3b2c");
   pol01047->SetLineColor(ci);
   pol01047->SetLineWidth(3);
   pol01047->SetChisquare(9.466331e-30);
   pol01047->SetNDF(11);
   pol01047->GetXaxis()->SetLabelFont(42);
   pol01047->GetXaxis()->SetLabelOffset(0.007);
   pol01047->GetXaxis()->SetLabelSize(0.05);
   pol01047->GetXaxis()->SetTitleSize(0.06);
   pol01047->GetXaxis()->SetTitleOffset(0.9);
   pol01047->GetXaxis()->SetTitleFont(42);
   pol01047->GetYaxis()->SetLabelFont(42);
   pol01047->GetYaxis()->SetLabelOffset(0.007);
   pol01047->GetYaxis()->SetLabelSize(0.05);
   pol01047->GetYaxis()->SetTitleSize(0.06);
   pol01047->GetYaxis()->SetTitleOffset(1.25);
   pol01047->GetYaxis()->SetTitleFont(42);
   pol01047->SetParameter(0,5);
   pol01047->SetParError(0,2.677959e-16);
   pol01047->SetParLimits(0,0,0);
   pol01047->Draw("Csame");
   
   Double_t _fx1047[12] = {
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
   Double_t _fy1047[12] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fex1047[12] = {
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
   Double_t _fey1047[12] = {
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
   gre = new TGraphErrors(12,_fx1047,_fy1047,_fex1047,_fey1047);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ffd300");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#ffd300");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1047 = new TH1F("Graph_Graph1047","",100,770,5930);
   Graph_Graph1047->SetMinimum(4.9);
   Graph_Graph1047->SetMaximum(6.1);
   Graph_Graph1047->SetDirectory(0);
   Graph_Graph1047->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1047->SetLineColor(ci);
   Graph_Graph1047->GetXaxis()->SetLabelFont(42);
   Graph_Graph1047->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetXaxis()->SetTitleFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelFont(42);
   Graph_Graph1047->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetYaxis()->SetTitleFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelFont(42);
   Graph_Graph1047->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1047->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1047);
   
   
   TF1 *pol01048 = new TF1("pol0","pol0",1200,5500);
   pol01048->SetFillColor(19);
   pol01048->SetFillStyle(0);
   pol01048->SetLineColor(2);
   pol01048->SetLineWidth(2);
   pol01048->SetChisquare(9.466331e-30);
   pol01048->SetNDF(11);
   pol01048->GetXaxis()->SetLabelFont(42);
   pol01048->GetXaxis()->SetLabelOffset(0.007);
   pol01048->GetXaxis()->SetLabelSize(0.05);
   pol01048->GetXaxis()->SetTitleSize(0.06);
   pol01048->GetXaxis()->SetTitleOffset(0.9);
   pol01048->GetXaxis()->SetTitleFont(42);
   pol01048->GetYaxis()->SetLabelFont(42);
   pol01048->GetYaxis()->SetLabelOffset(0.007);
   pol01048->GetYaxis()->SetLabelSize(0.05);
   pol01048->GetYaxis()->SetTitleSize(0.06);
   pol01048->GetYaxis()->SetTitleOffset(1.25);
   pol01048->GetYaxis()->SetTitleFont(42);
   pol01048->SetParameter(0,5);
   pol01048->SetParError(0,2.677959e-16);
   pol01048->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(pol01048);
   gre->Draw("p");
   
   TF1 *pol01049 = new TF1("pol0","pol0",0,13000);
   pol01049->SetBit(TF1::kNotDraw);
   pol01049->SetFillColor(19);
   pol01049->SetFillStyle(0);

   ci = TColor::GetColor("#ffd300");
   pol01049->SetMarkerColor(ci);
   pol01049->SetMarkerStyle(8);

   ci = TColor::GetColor("#ffd300");
   pol01049->SetLineColor(ci);
   pol01049->SetLineWidth(3);
   pol01049->SetChisquare(9.466331e-30);
   pol01049->SetNDF(11);
   pol01049->GetXaxis()->SetLabelFont(42);
   pol01049->GetXaxis()->SetLabelOffset(0.007);
   pol01049->GetXaxis()->SetLabelSize(0.05);
   pol01049->GetXaxis()->SetTitleSize(0.06);
   pol01049->GetXaxis()->SetTitleOffset(0.9);
   pol01049->GetXaxis()->SetTitleFont(42);
   pol01049->GetYaxis()->SetLabelFont(42);
   pol01049->GetYaxis()->SetLabelOffset(0.007);
   pol01049->GetYaxis()->SetLabelSize(0.05);
   pol01049->GetYaxis()->SetTitleSize(0.06);
   pol01049->GetYaxis()->SetTitleOffset(1.25);
   pol01049->GetYaxis()->SetTitleFont(42);
   pol01049->SetParameter(0,5);
   pol01049->SetParError(0,2.677959e-16);
   pol01049->SetParLimits(0,0,0);
   pol01049->Draw("Csame");
   
   TLegend *leg = new TLegend(0.7788945,0.723362,0.9974874,0.879833,NULL,"brNDC");
   leg->SetTextFont(62);
   leg->SetTextSize(0.032);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("pol0","Z' #rightarrow WW","L");

   ci = TColor::GetColor("#4292c6");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow WW","L");

   ci = TColor::GetColor("#41ab5d");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","W' #rightarrow WZ","L");

   ci = TColor::GetColor("#ef3b2c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pol0","G_{B}#rightarrow ZZ","L");

   ci = TColor::GetColor("#ffd300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
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
